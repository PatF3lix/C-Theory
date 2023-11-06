#include <stdio.h>
#include <stdlib.h>

//exampe 1 poison printf
#pragma GCC poison printf

//example 2 #pragma Gcc warning, error and message

#pragma GCC warning "hello"
#pragma GCC error "what"
#pragma message "ok"

int main()
{
    printf("Hello world!\n");
    return 0;
}
