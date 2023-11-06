#include <stdio.h>
#include <stdlib.h>

int main()
{
//  example read from file
    int ch = '\0';
    FILE *fp =NULL;

    if(fp = fopen("someFile.c", "rw")) {
        ch = getc(fp);
        while(ch != EOF){
            putc(ch, fp);
            ch = getc(fp);
        }
    fcloe(fp);
    }

//  example with stdout
    int ch = 'd';
    putc(ch, stdout);

//    example 2 putchar(int c)
    int main() {
    char string [] = "Hello Patrick, \nWhatever!";
    int i = 0;

    while(string[i] != '\0') {
        if(string[i] != '\n')
            putchar(string[i]);
        i++;
    }
//  example 2 putchar(int c) reading from stdin writing to stdout
    int ch = 0;
    while((ch = getchar()) != EOF){
          putchar(ch);
          /*ungetc returns EOF previously read back to stdin*/
          ungetc(ch, stdin)
    }
    printf("thank you !\n");

    //this would be usefull if you actually change the redirect to a file, which is a unix type thing we could do as well

// example 3 fputc(int character, File * stream)
    FILE * pFile = NULL;
    char c = '\0';

    pFile = fopen("myFile.txt", "w");
    if(pFile != NULL){
        for(c = 'A' ; c <= 'Z'; c++){
            fputc(c, pFile);
        }
        fclose(pFile);
    }


    return 0;
}
