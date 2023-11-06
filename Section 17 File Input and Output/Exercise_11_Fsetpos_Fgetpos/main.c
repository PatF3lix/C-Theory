#include <stdio.h>

#define FILENAME "Exercise_11_Fsetpos_Fgetpos/file11.txt"

void print_text_file(FILE *fp);

int main()
{
	FILE *fp;
    fpos_t position;
    
    fp = fopen(FILENAME, "w+");
    
    if(!fp)
        return -1;
        
    fgetpos(fp, &position);
    fputs("Hello, World!", fp);
    
    print_text_file(fp);
    
    //setting it back to 0 in this example. so the beginning of the textfile
    fsetpos(fp, &position);
    
    //Writes over the current data in file.txt
    fputs("This is going to override previous content", fp);
    
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