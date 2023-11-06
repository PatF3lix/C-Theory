#include <stdio.h>

#define FILENAME "Exercise_10_Fseek/file10.txt"

void print_text_file(FILE *fp);

int main(int argc, char **argv)
{
	FILE *fp;
    
    fp = fopen(FILENAME, "w+");
    if(!fp)
        return -1;
        
    fputs("This is Patrick", fp);
    print_text_file(fp);
    
    fseek( fp, 8 , SEEK_SET);
    fputs("Hello how are you", fp);
    
    print_text_file(fp);
    
    fclose(fp);
    fp = NULL;
	return 0;
}

void print_text_file(FILE *fp){
    char ch = ' ';
    
    rewind(fp);
    
    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }
    printf("\n");
}