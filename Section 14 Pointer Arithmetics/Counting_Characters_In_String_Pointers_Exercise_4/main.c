#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{
    // Remember a string is an array of char characters ended by '\0' terminal   
   printf("%d \n", stringLength("stringLength test"));
   printf("%d \n", stringLength(""));
   printf("%d \n", stringLength("jason"));

    return 0;
}

int stringLength(const char *string)
{
    //string hold the address to the first element in the array     
    const char *lastAddress = string;

    while (*lastAddress)
        lastAddress++;

    return lastAddress - string;
}