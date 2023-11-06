#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_attr_t attr;

void * dowork(void * threadid){
    long tid;
    size_t myStackSize;

    tid = (long) threadid;
    pthread_attr_getstacksize(&attr, &myStackSize);

    printf("Thread %ld: stack size = %li bytes \n", tid, myStackSize);

    pthread_exit(NULL);
}


int main()
{
    pthread_t myThread;
    size_t stacksize;
    pthread_t myID;
    long t = 5;

    pthread_attr_init(&attr); //initialize global vaiable

    pthread_attr_getstacksize(&attr, &stacksize); //get
    printf("Default stack size = %li\n", stacksize); //%li to print size_t variable

    stacksize = 9000000; //9 mbs

    printf("Amount of stack needed per thread = %li\n", stacksize);
    pthread_attr_setstacksize(&attr, stacksize); //set

    printf("Creating thread with stack size = %li bytes\n", stacksize);

    myID = pthread_create(&myThread, &attr, dowork, (void *) t);

    if(myID) {
        printf("Error; return code from pthread_create() is %lud\n",myID);
    }
    pthread_exit(NULL);
    return 0;
}
