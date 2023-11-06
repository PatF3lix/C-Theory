#include <stdio.h>

int main(int argc, char **argv)
{
    // if-else exemple:    
	int number_to_test;
    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);
    //modulo has pecedence over relational equal in c no parantheses needed.    
    number_to_test % 2 == 0 ? printf("The number is even.\n") : printf("The number is odd.\n");
    
    // else if exemple:
    int number, sign;
    printf("Please type in a number: ");
    scanf("%i", &number);
    
    if(number < 0) 
        sign = -1;
    else if (number == 0) 
        sign = 0;
    else 
        sign = 1; //Must be positive
    printf("Sign = %i\n", sign);
    
    
	return 0;
}