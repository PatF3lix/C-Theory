#include <stdio.h>
#include <stdlib.h>

void foo() {
    static int count = 0;
    int localVar = 0;
    printf("automatic=%d, static= %d\n", localVar++, count++);
}

int main()
{
    foo();
    foo();
    foo();
    return 0;
}
