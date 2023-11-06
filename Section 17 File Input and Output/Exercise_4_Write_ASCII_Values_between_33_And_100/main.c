#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;
    int ch;
    
    fp = fopen("Exercise_4_Write_ASCII_Values_between_33_And_100/file4.txt", "w");
    
    if(fp == NULL) {
        perror("Error in opening file");
        return (-1);
    }
    
    for(ch=33; ch <= 100; ch++){
        fputc(ch, fp);
    }
    
    fclose(fp);
	return 0;
}
