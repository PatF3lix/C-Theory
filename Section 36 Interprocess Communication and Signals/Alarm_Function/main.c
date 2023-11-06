#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main()
{
    alarm(5);
    //NEED TO CATCH SIGALRM or process terminates
    // signal (SIGARLM, alarmHandler);
    for(int i = 1; i < 10; i++) {
        printf("%d\n", i);
        sleep(1);
    }
    return 0;
}
