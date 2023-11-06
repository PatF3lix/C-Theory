#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>
#include <sys/signal.h>

//how to ignore a system signal

int main()
{
    signal(SIGINT, SIG_IGN);
    return 0;
}
