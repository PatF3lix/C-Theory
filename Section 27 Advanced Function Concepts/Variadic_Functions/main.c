#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double average(double v1, double v2, ...);

int main()
{
    double v1 = 10.5, v2 = 2.5;
    int num1 = 6, num2 = 5;
    long num3 = 12L, num4 = 20L;

    printf("Average = %.2lf\n", average(v1, 3.5, v2, 4.5, 0.0));
    printf("Average = %.2lf\n", average(1.0, 2.0, 0.0));
    printf("Average = %.2lf\n", average((double) num2, (double) num1,(double) num3,(double) num4, 0.0));


    return 0;
}

//Function to calculate the average of two or more arguments (Variadic function)
double average(double v1, double v2, ...)
{
    va_list parg;               //Pointer for variable argument list
    double sum = v1 + v2;       //Accumulate sum of the mandatory arguments
    double value = 0.0;         //variadic arguments total value
    //Count of number of arguments
    //You know you have at least 2 double valid arguments for this function to be called
    int count = 2;
    //Initialize argument pointer
    va_start(parg, v2);

    while((value = va_arg(parg, double)) != 0.0) {
        sum += value;
        count++;
    }

    va_end(parg);

    return sum/count;
}
