#include <stdio.h>
#include <stdlib.h>

typedef int* i_pointer;

int main()
{
    i_pointer p = NULL; //same as int* p = NULL;

    i_pointer a, *b;   //same as int *a, **b;
    i_pointer myArray[10]; //same as int* myArray[10]
    return 0;
}
