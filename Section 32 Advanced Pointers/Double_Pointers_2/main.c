#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//example 1

//void foo(char *ptr) {
//    ptr = malloc(255);
//    strcpy(ptr, "hello World");
//}

void foo(int **ptr) {
    int a = 5;
    *ptr = &a;
}

//example 3
void allocateMemory( int ** ptr) {
    *ptr = (int *) malloc(sizeof(int)); //allocate some memory
}

int main()
{
    //example 1
    int *ptr = NULL;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;

    foo(&ptr);
    printf("%d\n", *ptr);

    free(ptr);

    //example 2

    int * ptr2 = NULL;

    allocateMemory(&ptr2);
    *ptr = 20;
    printf("%d\n", *ptr2);

    //free up the memory
    free(ptr2);

    return 0;
}
