#include <stdio.h>
#include <stdlib.h>

int arraySum(int *, const int *);

int main(int argc, char **argv)
{   int n = 5;
	int values[] = {1, 2, 3, 4, 5};
    printf("The sum is %i\n", arraySum(values, &n));
    
	return 0;
}

/*
int arraySum(int *array, const int *n){
    int sum = 0;
    int *ptr = NULL;
    //Necessary and more efficient because we are comparing address to address not 0 < array.length (int)    
    int * const arrayEnd = array + *n;
    
    for(ptr = array; ptr < arrayEnd; ptr++){
        sum += *ptr;
    }
    return sum;
}
*/

//With pointer notation
int arraySum(int *array, const int *n){
    int sum = 0;
    //holds address "position" of the last element in the array.
    int * const arrayEnd = array + *n;

    for(; array < arrayEnd; array++){
        sum += *array;
    }
    return sum;
}
