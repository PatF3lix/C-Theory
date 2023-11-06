#include <stdio.h>
#include <stdlib.h>

void f1(int n, float * restrict a1, const float * restrict a2){
    int i;
    // the restrict pointers, makes it easy to implies that each iteration of the loop is independent of the others
    // And so the loop can be progressively optimized because of that restrict keyword
    for(i = 0; i < n; i++)
            a1[i] += a2[i];
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
