#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char buf[255];
    int ch = '\0';
    char *p = NULL;
    //where its stored, buff, size, from where is it read
    if(fgets(buf, sizeof(buf), stdin)) {
        p = strchr(buf, '\n');
        if(p) {
            *p = '\0';
        }else
        {
            while(((ch = getchar()) != '\n') && !feof(stdin) && !ferror(stdin));
        }
    }else{
        /* fgets failed, handle error*/
    }
    printf("Our buffer contains: %s\n", buf);

    //example 2 getline function

    //with memory allocation
    char *buffer = NULL;
    size_t buffsize = 32;
    size_t characters;

    buffer (char *)malloc(bufsize * sizeof(char));

    if(buffer == NULL){
        exit(1);
    }

    printf("Type something: ");
    characters = geline(&buffer, &bufsize, stdin);

    printf("%zu characters were read.\n", characters);
    printf("You typed: '%s'\n", buffer);

     //without memory allocation
    char buffer [32];
    char *b = buffer;
    size_t buffsize = 32;
    size_t characters;

    printf("Type something: ");
    characters = geline(&b, &bufsize, stdin);

    printf("%zu characters were read.\n", characters);
    printf("You typed: '%s'\n", buffer);

//-----------------------------------------------------------------------------------

//    example 1 puts

    char string[40];
    strcpy(string, "hello, how are you");
    puts(string);

//    example 2 fputs writes a line of characters to a specifies file
//  int fputs(const char * buffer, FILE *filePtr)

   FILE *fp = NULL;
   fp = fopen("somefile.txt", "w");

   if(fp == NULL) {
        exit(1);
   }

   fputs("Hello there, I hope this article will help!, fp");

   //close file
   fclose(fp);


    return 0;
}
