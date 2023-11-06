#include <stdio.h>

#define FILENAME "Exercise_9_fgetpos/file9.txt"

int main(int argc, char **argv)
{
	FILE *fp;
    fpos_t positionStart;
    fpos_t positionEnd;
    
    fp = fopen(FILENAME, "w");
    
    if(!fp)
        return -1;
    
    fgetpos(fp, &positionStart);
    
    
    fputs("Hello, World!", fp);
    fgetpos(fp, &positionEnd);
    
    printf("The starting byte was: %ld and the ending byte is: %ld\n", positionStart, positionEnd); 
    
    fclose(fp);
    fp = NULL;
    
	return 0;
}
