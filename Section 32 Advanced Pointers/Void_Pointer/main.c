#include <stdio.h>
#include <stdlib.h>

int main()
{
    //example 1
     int i = 10;
     float f =2.34;
     char ch = 'k';

     void *vptr = NULL;
     vptr = &i;

     printf("Value of i = %d\n", *(int *)vptr);

     vptr = &f;
     printf("Value of i = %f\n", *(float *)vptr);

     vptr = &ch;
     printf("Value of i = %c\n", *(char *)vptr);

    //example 2

    int aiData[] = {100, 200, 300};

    void *pvData = &aiData[1]; //address 200;

    pvData += sizeof(int);

    printf("%d", *(int*)pvData);

    return 0;
}
