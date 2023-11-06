#include <stdio.h>
#include <stdlib.h>

// symbolic constant
#define PI 3.14

// macro defintion
#define PRNT(a, b)\
    printf("value 1 = %d\n", a); \
    printf("value 2 = %d\n", b);

//after you build and compile this macro , because it's a preprocessor.
//The program is actually replaced by the following equivalent code
int main()
{
    int x = 2;
    int y = 3;
    printf("value 1 = %d\n", a);
    printf("value 2 = %d\n", b);
    return 0;
}


int main()
{
    int x = 2;
    int y = 3;

    PRNT(x, y);
    return 0;
}
