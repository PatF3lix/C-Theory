#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
    
    fp = fopen("Exercise_6_Writting_Formatted_Output/file6.txt", "w");
    
    if(fp)
        fprintf(fp, "%s %s %s %s %d", "Hello", "my", "number", "is: ", 666);
    
    fclose(fp);
    
	return 0;
}