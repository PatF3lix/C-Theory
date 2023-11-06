#include <stdio.h>

int main()
{
    unsigned int sum = 0;	//Stores the sum of the integers
    unsigned int count = 0;			//The number of integers to be summed

    //Read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);
    
    //Sum integers from 1 to count
    for(unsigned int i = 1; i <= count; ++i)
        sum +=i;
    printf("\nTotal of the first %u numbers is %u\n", count, sum);
    sum = 0;
    //OR
    for(unsigned int i = 1; i <= count; sum += i++);
    
    printf("\nTotal of the first %u numbers is %u\n", count, sum);
	return 0;
}
