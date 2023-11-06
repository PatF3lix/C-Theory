#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int size = 0;
    char * text = NULL;
    
    printf("Enter limit of the text: \n");
    scanf("%d", &size);
    
    text = (char *) malloc(size * sizeof(char));
    
    if(text != NULL){
        printf("Enter some text: \n");
        //the scan here is necessay in order to accept input from the user
        scanf(" ");
        //that input is then retrived but the fgets function()
        fgets(text, size, stdin);
        printf("Inputted text is: %s\n", text);
    }
    
    free(text);
    text = NULL;
	return 0;
}
