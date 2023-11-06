#include <stdio.h>
#include <stdlib.h>

// gcc -g main.c will enable debugging
// 1-from the command prompt cd to the program directory
// 2-gdb a.exe
// 3-run
// 4-list 8
// 5-to exit gdb -> quit

// you can set variable values with
// ex: set var i = 5;

// to access a specific variable inside a function use the '::'
// ex: print main::i
// ex: set var main::sum = 10

// to access a specific globale variable inside a file use the '::'
// ex: set var main.c::globale = 10

//to print lines from x to y
//list 10, 15

//to print lines for a specific function
//list functionName

//source file information
// info source


int main()
{
    const int data[5] = {1, 2, 3, 4, 5};
    int i = 0, sum = 0;

    for(i = 0; i >= 0; i++){
        sum += data[i];
    }

    printf("sum = %i\n", sum);


    return 0;
}
