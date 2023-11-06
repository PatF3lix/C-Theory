#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//convert a binary number to decimal
double convert_bin_to_decimal(char *ptr) {
    double decimal = 0;
    int base = 2;
    int negativeOrNot = 1;
    int i = 0;
    if(*ptr == '1'){
        negativeOrNot = -1;
        i = 1;
    }

    for(i; i < sizeof(ptr) / sizeof(char); i++)
        decimal +=(ptr[i] - '0') *  pow(base, sizeof(ptr) / sizeof(char) - i - 1);
    return decimal * negativeOrNot;
}

//solution teacher ( i like this, smart use of storing the remainder in an int, removes decimal )
// This can be used to extract every number 1 by one into an array if necessary
int convertBinaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder = 0;
    while( n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        i++;
    }
}

char * initialize_array(int * bytes) {
    char * binary_number = (char*) calloc(*bytes, sizeof(char));
    for(int i = 0; i < (sizeof(binary_number) / sizeof(char)); i++)
        binary_number[i] = '0';
    return binary_number;
}

_Bool negative_number_check(int * const number){
    return *number < 0.0 && *number != 0.0;
}

//convert a decimal to binary
char * convert_dec_to_Binary(int number){
    int counter = 7;
    int bytes = 8;
    int base = 2;
    char * binary_number = initialize_array(&bytes);
    if(negative_number_check(&number)){
        binary_number[0] = '1';
        number *= -1;
    }
    while(number >= 1){
        float remainder = number % base;
        if(remainder > 0){
            binary_number[counter--] = '1';
        }else{
            binary_number[counter--] = '0';
        }
        number /= 2;
    }
    return binary_number;
}

//solution teacher (i like this, it permits you to build a number 1 decimal at a time increasing
long long convertDecimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1;

    while(n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}



void print_Decimal_Number(char *binary_number, float *decimal){
    printf("The binary number ");
    for(int i = 0; i < (sizeof(binary_number) / sizeof(char)); i++)
        printf("%c", binary_number[i]);
    printf(" is equal to : %.0lf in decimal.\n", *decimal);
}

void print_Binary_Number(char *binary_number, float *decimal){
    printf("The decimal number %.0lf is equal to : ", *decimal);
    for(int i = 0; i < (sizeof(binary_number) / sizeof(char)); i++)
        printf("%c", binary_number[i]);
    printf(" in binary.\n");
}

void prompt_user_binary() {
    char binary [8];
    printf("Enter a binary number of 8 bits : ");
    scanf("%s", binary);
    float decimal = convert_bin_to_decimal(binary);
    print_Decimal_Number(binary, &decimal);
}

void prompt_user_decimal(){
    float decimal = 0;
    printf("\nEnter an integer between 127 and -128: ");
    scanf("%f", &decimal);
    char * binary_number = convert_dec_to_Binary(decimal);
    print_Binary_Number(binary_number, &decimal);
}

// my way of doing it was limited to a set of 8 bit, but can do negative numbers
// the teaahers way is not restricted by an array out of bounds issue, but does not verify negative numbers
int main()
{
    prompt_user_binary();
    prompt_user_decimal();
    return 0;
}
