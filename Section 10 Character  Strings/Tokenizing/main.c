#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char str[80] = "Hello how are you-my name is-Patrick";
    //the array must be a minimum of two , 1 index for the delimiter, 1 for the terminal \0 -> const char s[2] = "-";
    const char s[] = "-";
    char * token = NULL;
    
    //get the first token
    //since strtok returns a pointer to the index where it found the delimiter the first time    
    token = strtok(str, s);
    
    while(token != NULL) {
        printf(" %s\n", token);
        token = strtok(NULL, s);
    }
	return 0;
    
    /****Explaining why Null is passed in the second function call -> token = strtok(NULL, s);***
	
	- The strtok runtime function works like this
		- The first time you call strtok you provide a string that you want to tokenize

		- Char str[80] = "Hello how are you - my name is - Patrick";
			-in the above string dash seems to be a good delimiter between words so lets use that:

		- Char* token = strtok(str, " ");
			- what happens now is that 'str' is searched until the dash character is found,
				the first token is returned ('this')and token points to that token (string)

		- In order to get next token and to continue with the same string NULL is passed as first argument
			**IMPORTANT** since strtok maintains a static pointer to your previous passed string:

		- token = strtok(NULL,"-");
			token now points to ' my name is '

		- And so on until no more spaces can be found, then the last string is returned as the last token 'string'.

		- More conveniently you could write it like this instead to print out all tokens:

			for (char *p = strtok(str,"-"); p != NULL; p = strtok(NULL, " "))
			{
			puts(p);
			}
			EDIT:

		- If you want to store the returned values from strtok you need to copy the token to another buffer e.g
			. strdup(p); since the original string (pointed to by the static pointer inside strtok)
			is modified between iterations in order to return the token.*/
}
