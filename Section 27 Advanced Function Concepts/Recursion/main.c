#include <stdio.h>
#include <stdlib.h>

//example 1
int factorial(int n) {
    int result = 0;

    if(n == 0)
        result = 1;
    else
        result = n * factorial (n -1);

    return result;
}

//example 2
void up_and_down(int);

int main()
{
    //exampl 1
    int j = 0;

    for(j = 0; j < 8; j++){
        printf("%d! = %d\n", j, factorial(j));
    }

    //example 2
    up_and_down(1);


    return 0;
}

void up_and_down(int n) {
    printf("Level %d: n location %p\n", n, &n);
    if(n < 4)
        up_and_down(n + 1);

    printf("LEVEL %d: n location %p\n", n, &n);
}
