#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;
    int c;
    int lineCounter = 0;
    //TextFiles/Exercise1 Read Text File/textfile1.txt
    fp = fopen("Exercise_1_Read_Text_file/test2.txt","r");
    
    if(fp == NULL) {
        perror("Error in opening file");
        return (-1);
    }
    
    //Read a single character at a time
    while((c = fgetc(fp)) != EOF){
        printf("%c", c);
        if(c == '\n')
            lineCounter++;
    }
        
    fclose(fp);
    fp = NULL;
    printf("Number of lines in the text document is : %i", lineCounter);
	return 0;
}