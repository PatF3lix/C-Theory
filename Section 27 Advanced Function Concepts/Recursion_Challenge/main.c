#include <stdio.h>
#include <stdlib.h>

//challenge 1
int sumOf(int num) {
    int result = 0;
    if(num == 1){
        return 1;
    }else{
        result = num + sumOf(num - 1);
    }
    return result;
}
//challenge 2
int findGCD(int num1, int num2);
//challenge 3
char * reverse(char * str);

int main()
{
    //challenge 1
    int num = 0;
    printf("Enter a number: \n");
    scanf("%d", &num);
    int sum = 0;
    sum = sumOf(num);
    printf("The sum of all the number from 1 to %d is %d\n", num, sum);

    //challenge 2
    int num1 = 0, num2 = 0, gcd = 0;

    printf("\n\n Recursion : Find GCD of two numbers :\n");
    printf("--------------------------------------------\n");

    printf(" Input 1st number: ");
    scanf("%d", &num1);

    printf(" Input 2nd number: ");
    scanf("%d", &num2);

    gcd = findGCD(num1, num2);

    printf("\n The GCD of %d and %d is: %d\n\n", num1, num2, gcd);

    //challenge 3
    char str [100];
    char *rev = NULL;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("The original string is: %s\n", str);
    rev = reverse(str);

    printf("the reversed string is: %s\n", rev);

    return 0;
}

//challenge 2
int findGCD(int a, int b) {
    while(a != b) {
        if(a > b)
            return findGCD(a-b, b);
        else
            return findGCD(a, b-a);
    }
    return a;
}
//challenge 3
char * reverse(char *str) {
    static int i = 0;
    static char rev[100];

    if(*str) {
        reverse(str + 1);
        rev[i++] = *str;
    }

    return rev;
}
