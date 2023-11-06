#include <stdio.h>
#include <stdlib.h>


union mixed {
    char c;
    float f;
    int i;
};

union number {
    int x;
    double y;
};

//initialize a union to another union example
void foo(union number n){
    union number x = n;
};

int main()
{
    union mixed x;

    x.c = 'j';
    printf("Character = %c\n", x.c);
    // to switch all you have to do is assign a value to a declared variable inside the union body
    //if a value was assign to a precedent variable it will be overwritten
    x.f = 784.3323;
    printf("float = %f\n", x.f);

    //initialization is possible
    union mixed y = {.i = 15};
    printf("int = %d\n", y.i);

    //pointer example
    union number x1;
    union number *y2 = &x1;

    y2->y = 100.0; /* put a double into the same union*/
    printf("value of integer x: %d\n", y2->x);
    printf("value of double y: %f\n", y2->y);

    return 0;
}
