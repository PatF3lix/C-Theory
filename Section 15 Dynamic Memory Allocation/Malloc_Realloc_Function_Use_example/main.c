#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *str = NULL;
    
    //Initial memory allocation
    str = (char *) malloc(15);
    strcpy(str, "jason");
    printf("String = %s, Address = %p\n", str, str);
    
    //Reallocating memory
    str = (char *) realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s, Adress = %p\n", str, str);
    
    //Free allocated memory
    free(str);
	return 0;
}
