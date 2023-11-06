#include <stdio.h>

int main(int argc, char **argv)
{
	int number = 0; //A variable of type int initialized to 0
    int *pnumber = NULL; //A pointer that can point to type int
    
    number = 10;
    printf("number's address: %p\n", &number);  //Output the address
    printf("number's value: %d\n\n", number);   //Output the value
    
    pnumber = &number;  //Store the address of number in pnumber
    
    printf("pnumber's address: %p\n", (void*)&pnumber);             //Output the address
    printf("pnumber's bytes size: %zd bytes\n", sizeof(pnumber));   //Output the size
    printf("pnumber's value: %p\n", pnumber);                       //Output the value (number's address)
    printf("value pointed to: %d\n", *pnumber);                     //Value at the number's address
    
	return 0;
}
