#include <stdio.h>

int main(void)
{
	FILE *fp;
    char str[60];
    
    fp = fopen("Exercise_2_Reading_Strings_from_text_file/file3.txt","r");
    
    if(fp == NULL) {
        perror("Error in opening file");
        return (-1);
    }
    
    if(fgets(str, 60, fp) != NULL)
        printf("%s", str);
    
    fclose(fp);
    fp = NULL;
	return 0;
}
