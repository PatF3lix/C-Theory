#include <stdio.h>
#include <stdlib.h>

//not bad could be used with extern , or static, but if you want safe const global variables, put them in a header file and then use include "example.h"
// in header file don't forget to use the static qualifier with the const
const double PI = 3.14159;
const char * MONTHS[] = {"January","Febuary", "March", "April","May", "June"};

int main()
{
    const float *pf; //this pointer is pointing to a const value
    float const *pf; //this pointer is pointing to a const value
    float * const pt; //this pointer is constantly poiting to the same address
    const float const *ptr; //this pointer is constantly pointing to the same address and to a const value

    return 0;
}

// const int array[] is the same as const int *ptr
void display(const int array[], int limit);

// this function will add a copy of the second string to the end of the first string
char * strcat(char *restrict s1, const char * restrict s2);
