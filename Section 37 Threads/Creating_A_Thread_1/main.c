#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *hello_fun() {
    printf("Hello World!\n");
    return NULL;
}


int main()
{
    pthread_t thread = 0;
    pthread_create(&thread, NULL, hello_fun, NULL);
    // what the join function actually waited until the thread was done running
    pthread_join(thread,NULL);
    //then exited main
    pthread_exit(NULL);
    return 0;
}
