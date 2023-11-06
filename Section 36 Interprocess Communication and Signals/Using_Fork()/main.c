#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

///Example 1

//int main()
//{
//    /* make two process which run same program after this instruction*/
//    fork();
//    printf("Hello world!\n");
//    return 0;
//}

///Example 2

//#define MAX_COUNT 10
//#define BUF_SIZE 100
//#include <unistd.h>
//
//int main()
//{
//    pid_t pid;
//    char buf[BUF_SIZE];
//
//    fork();
//    pid = getpid();
//    for(int i = 1; i < MAX_COUNT;i++){
//        sprintf(buf, "This line is from pid %d, value = %d\n", pid, i);
//        write(1, buf, strlen(buf));
//    }
//    return 0;
//}

///Example 3

#include <sys/types.h>
#include <unistd.h>

#define MAX_COUNT 10

void childProcess(void);    /* child process prototype*/
void parentProcess(void);   /* parent process prototype*/

int main() {
    pid_t pid;
    pid = fork();

    if(pid == 0)
        childProcess();
    else if (pid > 0)
        parentProcess();
    else {
        //fork failed
        printf("fork() failed!\n");
        return 1;
    }
    return 0;
}

void childProcess() {
    int i = 0;
    for(i = 1; i <= MAX_COUNT; i++)
        printf("This line is from child, value = %d\n", i);
    printf("   *** Child process is done ***\n");
}

void parentProcess() {
    int i = 0;
    for(i = 1; i <= MAX_COUNT; i++)
        printf("This line is from parent, value = %d\n", i);
    printf("   *** Parent process is done ***\n");
}
