#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

//example 3 compile-time assert
static_assert(CHAR_BIT ==16, "16-bit char falsely assumed");

int main()
{
    //example 1
//    int a = 5;
//
//    for(int x = 0; x < 20; x++){
//        printf("x = %d y = %d\n", x, a);
//        assert(x < a);
//    }

    //example 2

    double x, y, z;

    puts("Enter a pair of numbers ( 0 0 to quit): ");


    while(scanf("%lf %lf", &x, &y) == 2 && (x != 0 || y != 0)){
                z = x *x - y * y; //should be positive
                assert (z >= 0);
                printf("answer is %f\n", sqrt(z));
                puts("Next pair of numbers: ");
    }
    puts("Done");

    //example 3 compile-time assert
    puts("char is a 16 bits.");

    return 0;
}
