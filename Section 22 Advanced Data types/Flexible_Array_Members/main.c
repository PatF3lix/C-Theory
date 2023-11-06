#include <stdio.h>
#include <stdlib.h>

struct s {
    int arraySize;
    int array[];
}; //end struct s

int main()
{
    int desiredSize =0 ;
    printf("Enter the size of the array: ");
    scanf("%d", &desiredSize);
    struct s *ptr = NULL;
    ptr = malloc(sizeof(struct s) + desiredSize * sizeof(int)); //desiredSize * sizeof(int) is how you allocate memory dynamically for an array inside a struct

    for(int i = 0; i < desiredSize; i++) {
        ptr->array[i] = i;
        printf("%d, ", ptr->array[i]);
    }

    return 0;
}
