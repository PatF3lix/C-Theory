#include <stdio.h>
#include <stdlib.h>

int main()
{

    int w1 = 3;     // 0000 0000 0000 0000 0000 0000 0000 0011
    int result = 0;
    result = w1 << 1;    // = 0000 0000 0000 0000 0000 0000 0000 0110 swift bits left by 1. the most-far-left number will be lost.
    printf("%d", result); // 6

    w1 = 127; // 0111 1111
    result = w1 >> 1;
    printf("\n%d", result); // 0011 1111 = 63 the far-most right number will be lost.

    return 0;
}
