#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

// this program raises a stop signal

int main()
{
    printf("testing SIGSTOP\n");
    raise(SIGSTOP);
    return 0;
}
