#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handler_divide_by_zero(int signum);

int main()
{
    int result = 0;
    int v1 = 0, v2 = 0;
    //function pointer
    void (*sigHandlerReturn)(int);
    //
    sigHandlerReturn = signal(SIGFPE, handler_divide_by_zero);

    if(sigHandlerReturn == SIG_ERR) {
        perror("Signal Error: ");
        return 1;
    }

    v1 = 121;
    result = v1/v2;
    printf("Result of Divide by Zero is %d\n", result);
    return 0;
}

void handler_divide_by_zero(int signum){
    if(signum == SIGFPE){
        printf("Received SIGFPE, Divide by Zero Exception\n");
        exit(0);
    }else{
        printf("Received %d Signal\n", signum);
        return;
    }
}
