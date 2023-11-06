#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    for(int i =0; i < 10; i++){
            //to generate a range use modulo followed by the max + 1 will give you a range from (1 to max) inclusive
            // if you don't add the +1 it will be ranged from 0 to max exclusive
        printf(" %d ", rand() % 5);
    }
    printf("\n");
    return 0;
}
