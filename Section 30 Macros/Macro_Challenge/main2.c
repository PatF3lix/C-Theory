#include <stdio.h>
#include <stdlib.h>

// Define macro to find sum of two numbers
#define SUM(x, y) (x + y)
int main2()
{
    int num1, num2;

    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    //Calculate and printf sum using macro
    printf("Sum(%d,%d) = %d\n", num1, num2, SUM(num1, num2));

    return 0;
}
