#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF 256

int has_ch(char ch, const char * line);

//command line arguments
//1- click on project nam String_Functions_Challenge
//2- click on Project at the top option bar
//3- click on select program arguments
//4- p is the first argumnet. the character we will be looking for
//5- data.txt is the second argument, which is the file location

int main(int argc, char *argv[])
{
    FILE * fp = NULL;
    char ch = '\0';
    char line[BUF];

    if(argc != 3) {
        printf("Usage: %s characters filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    ch = argv[1][0]; //the char you are looking for

    if ((fp = fopen(argv[2], "r")) == NULL){
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while(fgets(line, BUF, fp) != NULL) {
        if(has_ch(ch, line))
            fputs(line, stdout);
    }
    fclose(fp);
    return 0;
}

int has_ch(char ch, const char * line)
{
    while(*line){
        if(ch == *line++)
            return 1;
    }
    reurn 0;
}
