#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int w1 = 25;
    short int w2 = 77;
    short int w3 = 0;

//    Logical AND '&'
    w3 = w1 & w2;

//    w1  0001 1001
//       &
//    w2  0100 1101
//    --------------
//        0000 1001
    printf("%d\n", w3); //will give 9

//    Logical OR '|'
//    w1  0001 1001
//       |
//    w2  0100 1101
//    --------------
//        0101 1101
    w3 = w1 | w2;
    printf("%d\n", w3); //will give 93

//    Logical XOR '^'
//    w1  0001 1001
//       ^
//    w2  0100 1101
//    --------------
//        0101 0100
    w3 = w1 ^ w2;
    printf("%d\n", w3); //will give 84

    //swaping values (normaly  "bubble sort")
//    temp = w1;
//    w1 = w2;
//    w2 = temp;

    //with XOR operator (don't need temp)
    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;
    printf("%d\n", w1);
    printf("%d\n", w2);

//  1)  Logical XOR '^'
//    w1  0001 1001
//       ^
//    w2  0100 1101
//    --------------
//w1  =   0101 0100
//    printf("%d\n", w1); //will print 84

//  2)  Logical XOR '^'
//    w2  0100 1101
//       ^
//    w1  0101 0100
//    --------------
//w2  =   0001 1001
//    printf("%d\n", w2); //will print 25

//  3)  Logical XOR '^'
//    w2  0001 1001
//       ^
//    w1  0101 0100
//    --------------
//w1  =   0100 1101
//    printf("%d\n", w1); // will print 77

    signed int w5 = 2;
    signed int result = 0;

    result = ~(w5);
    printf("%d", result); //will print -3 because of two's compliment


    return 0;
}
