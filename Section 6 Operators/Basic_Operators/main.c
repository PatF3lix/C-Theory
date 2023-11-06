#include <stdio.h>

int main(int argc, char **argv)
{
    //arithmethic operators    
    
	int a = 33;
    int b = 44;
    int result = 0;
    result = a + b;
    printf("The result of a + b = %d\n", result);
    
    //Logical operators
    
    _Bool aa = 1;
    _Bool bb = 0;
    _Bool resultB = aa && bb;
    printf("%d\n", resultB);
    resultB = aa || bb;
    printf("%d\n", resultB);
    resultB = !(aa || bb);
    printf("%d\n", resultB);
    
    //Assignment Operators

    
    
	return 0;
}
