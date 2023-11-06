#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str1[10], str2[10], str3[10], str4[10];
    int year = 0;
    FILE *fp;
    
    fp = fopen("Exercise_3_Read_And_write_From_Text_File/file.txt", "w+");
    
    if(fp != NULL)
        fputs("Hello how are you 2023", fp);
        
    rewind(fp);
    
    fscanf(fp, "%s %s %s %s %d", str1, str2, str3, str4, &year);
     
    printf("Read String1 | %s|\n", str1);
    printf("Read String2 | %s|\n", str2);
    printf("Read String3 | %s|\n", str3);
    printf("Read String4 | %s|\n", str4);
    printf("Read Integer | %d|\n", year);
    
    fclose(fp);
    
	return 0;
}
