#include <stdio.h>
#include <stdlib.h>

//example 1

#define PI 3.14
#define CIRCLE_AREA(X) ((PI) * (X) * (X))
// the reason we use parentheses around each x and the replacement text force the proper order of evaluation
//when the macro argument is an expression

//-----------------------------------------------------------------------------------------------------------------

//example 2

//to define variadic macro, you define a ,macro with arguments where the last argument is three periods like the ellipsis, just like in the function
// then there's a macro underscore underscore va underscore args underscore that expands to whatever arguments matched this ellipsis in the macro call
//unlike variadic function, variadic macros don't have a mandatory first argument

#define Warning(...) fprintf(stderr, __VA_ARGS__)

//example 3 other valid  macros definition alternatives

#define FOO BAR
#define BAR (12)

#define MISC(x) (puts("incrementing", (x)++)

#define Max(a, b) ((a) > (b) ? (a) : (b))

#define UpTo(i, n) for((i) = 0; (i) < (n); (i)++)


int main()
{   //example 1
    int area = CIRCLE_AREA(4);
    printf("Area is %d\n", area);

    //example 2
    Warning("%s: this program is here, on the %d line.\n", "Patrick", 26);
    return 0;
}
