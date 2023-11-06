#include <stdio.h>
#include <stdlib.h>

//example 1 function prototype
//int atoi(char const *s);

//example 2 atof function prototype
//double alotf(char const *s)

//example 3 atol function prototype
//long int alotf(char const *s)

//example 4 convert a digit into a str
//sprintf(d,"%d", 50);

//example 5
//double strtod(const char *str, char **str_end);

//example 6
//float strtof(const char *str, char **str_end);

//example 7
//long int strtol(const char *str, char **str_end, int base);
//base is between 2 and 36; base 10 is decimal. 16 is hexadecimal


int main()
{
    //example 1 atoi char to int
    char a[10] = "100";
    int value = atoi(a);
    printf("Value = %d\n", value);

    //example 2 atof char to float
    char b[10] = "3.14";
    float value2 = atof(b);
    printf("Value = %.2f\n", value2);

    //example 3 atol char to long
    char c[10] = "100000000";
    long int value3 = atol(c);
    printf("Value = %ld\n", value3);

    /*Example 4
      oposite to the asci number functions
      convert 50 into "50"
    */
    char d[10];
    sprintf(d,"%d", 50);
    printf("Value = %s\n", d);

    //example 5 strtod str to double
    char e[] = "123.456xyz", *end;
    double value4 = 0;
    //the pointer end is set by strtod to the charracter in the buffer that terminated the scan. In this case it set's pointer to character 'x'. Read every number before that.
    value4 = strtod(e, &end);
    printf("Value = %lf\n", value4);

    //example 6 strtof extract to values or more from a string
    char f[] = "365.25 7.0", *end2;
    float value5 = strtof(f, &end2);
    float value5a = strtof(end2, NULL);
    //the pointer end is set by strtod to the charracter in the buffer that terminated the scan. In this case it set's pointer to character 'x'. Read every number before that.
    value5 = strtod(f, &end);
    printf("Value = %.2f\n", value5);
    printf("Value = %.2f\n", value5a);

    //    example 7 strtol
    char str[30] = "2030300 This is test";
    char *ptr;
    long ret;
    ret = strtol(str, &ptr, 10);
    printf("The number (unsigned long integer is %ld\n", ret);
    printf("String part is |%s|", ptr);

    return 0;
}
