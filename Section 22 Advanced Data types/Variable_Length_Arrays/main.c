#include <stdio.h>
#include <stdlib.h>

void array(int size) {
    char alpha[size];
    int x = 0;
    while(x < size) {
        alpha[x] = 'A' + x;
        printf("alpha is: %c: \n", alpha[x]);
        x++;
    }
}

int main()
{
//  example 1

//    size_t rows = 0;
//    size_t columns = 0;
//
//    printf("Enter the number of rows you want to store: ");
//    scanf("%zd", &rows);
//    printf("Enter the number of columns in a row: ");
//    scanf("%zd", &columns);
//    float beans[rows][columns];

// Example 2

array(5);
array(10);
array(2);

    return 0;
}
