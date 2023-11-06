#include <stdio.h>

#define MONTHS 12

int main(int argc, char **argv)
{
    //ex1 traditional initialization:
//	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int index;
//    
//    for(index = 0; index < MONTHS; index++){
//        printf("Month %d has %2d days.\n", index + 1, days[index]);
//    }
    
    //ex2 designated initialization:
//    int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
//    int i;
//    
//    for(i = 0; i < MONTHS; i++)
//        printf("%2d %d\n", i + 1, days[i]);

//    ex3 Initializing all elements to the same value
    int array_values[10] = { 0, 1, 4, 9, 16};
    int i;
    
    for(i = 5; i < 10; i++){
        array_values[i] = i * i;
    }
    
    for(i = 0; i < 10; i++){
        printf("array_values[%i] = %i\n", i, array_values[i]); 
    }
        
	return 0;
}
