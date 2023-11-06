#include <stdio.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
	int integerVar = 100;
    short shortInteger = 10;
    float floatingVar = 331.7981;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    bool boolVar = 0;
    
    printf("%i\n", integerVar);
    printf("%hd\n", shortInteger); 
    printf("%f\n", floatingVar);
    //specified precision "be carefull it will round the number )  
    printf("%.2f\n", floatingVar);
    printf("%e\n", doubleVar);
    printf("%g\n", doubleVar);
    printf("%c\n", charVar);
    printf("%i\n", boolVar);
    printf("%s\n", "this is a string");
    printf("%s %d %s\n", "this is a string with a variable int:",integerVar,"followed by another string.");
    
	return 0;
}
