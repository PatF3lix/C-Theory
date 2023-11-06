#include <stdio.h>
#include <stdlib.h>

int main()
{
    int words = 0;
    int numCharacters = 0;
    int c = '\0';

   while((c = getchar()) !=EOF){
     if(isalpha(c)) {
        numCharacters++;
     }
     else {
        words++;
     }
   }

    printf("\nnumber of words: %d\n", words);
    printf("number of characters: %d\n", numCharacters);

    return 0;
}
