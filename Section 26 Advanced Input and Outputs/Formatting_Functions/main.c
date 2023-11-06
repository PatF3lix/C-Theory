#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main()
{
    //example 1 sprintf(char *, "string", variables);

    char string[100];
    sprintf(string, "Hello, this is the number: %d", 55);
    puts(string);

    //example 2 sprintf(char *, "string", variables);

    char string[100];
    int a = 10, b = 20, c = 0;
    c = a + b;
    sprintf(string, "The Sum of %d and %d is %d", a, b, c);
    puts(string);

    //example 3
    FILE *f = NULL;
    char ch[100];

    //open the file for read and write operation
    if((f=fopen("data.txt", "r+")) == NULL) {
        printf("Cannot open the file...");
        exit(1);
    }

    for(int i = 0; i < 10; i++) {
        //enter the strings with values in the file
        fprintf(f,"The count number is %d\n", i + 1);
    }

    fclose(f);

    if((f=fopen("data.txt", "r+")) == NULL){
        printf("Cannot open the file...");
        exit(1);
    }

    printf("File content is--\n");
    printf("\n..................print the strings.......................\n\n");

    //feof is a functions that check for EOF
    while(!feof(f)){
        fgets(ch,100,f);
        printf("%s", ch);
    }

    fclose(f);

    //example 4 stderr()

    if((inFile = fopen("data","r")) == NULL)
    {
        fprintf(stderr,"C'ant open data reading.\n");
        ...
    }

    //example 5 fscanf() reads from file

    FILE *fp = NULL;
    char buff[255];

    fp = fopen("data.txt", "r");

    while(fscanf(fp, "%s", buff) != EOF) {
        printf("%s", buff);
    }

    fclose(fp);

    //example 6 fscanf()

    FILE *fp = NULL;
    char buff[MAX];

    fp = fopen("data.txt", "a+"){
        fprintf(stdout, "Can't open file. \n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of line to terminate.");

    while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
        fprintf(fp, "%s\n", words);

    puts("File contents:");
    rewind(fp); // go back to the beginning of the file

    while(fscnf(fp, "%s", words) == 1)
        puts(words);

    puts("Done!");
    if(fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");

    //example 7 sscanf() read from string

    char *str = "Jason Instructor 43";
    char name[10], title[12];
    int age = 0, ret = 0;

    ret = sscanf(str, "%s %s %d", name, title, &age);

    printf("Name: %s\n", name);
    printf"Title: %s\n", title);
    printf("Age: %d\n", age);

    return 0;
}
