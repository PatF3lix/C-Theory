#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    //String Length    
	char myString[] = "My Name is Patrick";
    printf("The length of myString is: %ld\n", strlen(myString));
    
    //String copy 
    
    // 1-src, 2-stringToCpy 3- exact size of le string to be copied - 1 for the terminal
    //strncopy is safer, no error out of bounds in this case, if the buffer is big enough of course
    char temp[50];
    strncpy(temp, myString, sizeof(temp) - 1);
    printf("Copied my String in temp: %s\n", myString);
    
    //String Concatination
    
    char src[50], dest[50];
    strcpy(dest, "This is destination");
    strcpy(src, ", This is source");
    strncat(dest, src, 16);
    printf("Concatination result: |%s\n|", dest);
    
    //String Compare
    
    printf("strcmp(\"A\",\"A\")is ");
		printf("%d\n", strcmp("A", "A"));
		
		printf("strcmp(\"A\",\"B\")is ");
		printf("%d\n", strcmp("A", "B"));
		
		printf("strcmp(\"B\",\"A\")is ");
		printf("%d\n", strcmp("B", "A"));
		
		printf("strcmp(\"C\",\"A\")is ");
		printf("%d\n", strcmp("C", "A"));
		
		printf("strcmp(\"Z\",\"a\")is ");
		printf("%d\n", strcmp("Z", "a"));
		
		printf("strcmp(\"apples\",\"apple\")is ");
		printf("%d\n", strcmp("apples", "apple"));
        
        
	return 0;
}
