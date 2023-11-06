#include <stdio.h>

#define FILENAME "Exercise_8_Ftell_Find_Length_In_Bytes_Of_File/file8.txt"

int main()
{
	FILE *fp;
    int len;
    
    fp = fopen(FILENAME, "r");
    
    if(!fp) {
        perror("Error opening file");
        return -1;
    }
    
    fseek(fp, 0, SEEK_END);
    
    len = ftell(fp);
    fclose(fp);
    
    printf("Total size of file.txt = %d bytes\n", len);
	return 0;
}
