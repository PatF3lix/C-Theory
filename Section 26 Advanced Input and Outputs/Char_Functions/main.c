#include <stdio.h>
#include <stdlib.h>

int main()
{
    //getc function reads from file and stdin

    //getc example 1 read from file
    char ch = NULL;
    FILE *fp;

    if(fp = fopen("someFile.c", "rw")){
        ch = getc(fp);
        while(ch != EOF){
            ch = getc(fp);
        }
        fclose(fp)
    }
    //getc example 2 read from stdin
    char ch = '\0';
    ch = getc(stdin);
    printf("read character from stdin %c\n",ch);

    //getchar function only reads from standard input
    int ch = 0;
    while((ch = getchar()) != EOF)
    printf("%c\n", getchar());

    //fgetc example 3 reads from file
    FILE * fp = null;
    char c = '\0';
    fp = fopen("myFile.c", "r"); //opening an existing file

    if(fp == NULL) {
        printf("Could not open file myFile.c");
        return 1;
    }

    print("Reading the file myFile.c");
    while(1) {
        c = fgetc(fp);//reading the file
        if(c == EOF)
            break;
        printf("%c", c);
        printf("Closing the file test.c");
        fclose(fp); //Closing the file
        return 0;
    }

    //example for ungetc
    //useful for reading an input character by character when you don't know how many characters make up a data unit.
    char c = 0;
    while(isspace(ch = (char)getchar)))); //reads as long as there are spaces
    ungetc(ch,stdin);   //put back the nonspace character
    printf("char is %c\n", getchar());


    return 0;
}
