#include <stdio.h>

int main(int argc, char **argv)
{
    // unsigned int can only hold positive numbers.	
    unsigned int num1 = 60; // 0011 1100
    unsigned int num2 = 13; // 0000 1101
    int result = 0;
    
    result = num1 & num2; // 0000 1100 = 12
    printf("num1 & num2 result is : %d\n", result);
    
    result = num1 | num2; // 0011 1101 = 61
    printf("num1 | num2 result is : %d\n", result);
    
    /* if an int on your machine is 32 bits then the complete sequence of numbers for num1 would be 
    *  0000 0000 0000 0000 0000 0000 0011 1100   
    *  If you were to shift to the left 2, num1 << 2, the result would be 
    *  0000 0000 0000 0000 0000 0000 1111 0000 = 240
    */  
    result = num1 << 2;
    printf(" num1 << 2 result is : %d\n", result); //1111 0000 = 240
    
    result = num1 >> 2;
    printf(" num1 >> 2 result is : %d\n", result); // 0000 1111 = 15
    
	return 0;
}
