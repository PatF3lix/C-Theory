#include <stdio.h>

int main(int argc, char **argv)
{
    //Ex1:
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;
    
    switch(today){
        case Sunday:
            printf("Today is Sunday");
            break;
        case Monday:
            printf("Today is Monday");
            break;
        case Tuesday:
            printf("Today is Tuesday");
            break;
        default:
            printf("Whatever");
            break;   
            }
    //Ex2:   
    float value1, value2;
    char operator;
    
    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);
    
    switch(operator) {
        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            if(value2 == 0)
                printf("Division by zero.\n");
            else
                printf("%.f\n", value1 / value2);
            break;
        default:
            printf("Unknown operator.\n");
            break;
    }
    
	return 0;
}
