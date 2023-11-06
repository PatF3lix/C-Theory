#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

/*
	Separates the thread of execution from the thread object, allowing execution to continue independently.
	Any allocated resources will be freed once the thread exits. After calling detach *this no longer owns any thread.
*/

void *threadFn(void *arg) {
    pthread_detach(pthread_self());
    sleep(1);
    printf("Thread Fn\n");
    pthread_exit(NULL);
}

int main()
{
    pthread_t tid;
    int ret = pthread_create(&tid, NULL, threadFn, NULL);

    if(ret != 0) {
        perror("Thread Creation Error\n");
        exit(1);
    }

    printf("After thread created in Main\n");
    pthread_exit(NULL);
    return 0;
}

