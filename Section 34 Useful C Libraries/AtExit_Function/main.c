#include <stdio.h>
#include <stdlib.h>

void sign_off(void);
void too_bad(void);

int main()
{
    int n = 0;

    atexit(sign_off);   /*register the sign_off() function */
    puts("Enter an integer: ");

    //***THIS IS HOW YOU DO INPUT CHECK **
    //scanf return the number of values that were assigned in this case 1
    if(scanf("%d", &n) != 1){
        puts("That's no integer!");
        atexit(too_bad); //register the too_bad() function
        exit(EXIT_FAILURE);
    }
    return 0;
}


void sign_off(void) {
    puts("in sign_off...");
 }

 void too_bad(void){
    puts("in too_bad...");
 }

