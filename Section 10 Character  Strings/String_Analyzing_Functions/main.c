#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	unsigned char buff[100];		//Input buffer
    int nLetters = 0;	//Number of letters in input
    int nDigits = 0;	//Number of digits in input 
    int nPunct = 0;		//Number of punctuation characters
    
    printf("Enter an interesting string of less than %d characters:\n", 100);
    scanf("%s", buff);	//Read a string into a buffer
    
    int i = 0;			// Buffer index
    while(buff[i])
     {
        if(isalpha(buff[i])){
            ++nLetters;		// Increment letter count
        }
        else if(isdigit(buff[i])){
            ++nDigits;		// Increment digit count
        }
        else if(ispunct(buff[i])){
            ++nPunct;
        }
        i++;
     }
    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);
	return 0;
    
    /*	**IMPORTANT For Analyzing String Functions**
	
	- GCC = The GNU Compiler Collection (GCC) is an optimizing compiler produced by the GNU Project supporting
		various programming languages, hardware architectures and operating systems.
	
	- This is a typical case where GCC uses overly bureaucratic and indirect wording in its diagnostics,
		which makes it difficult to understand the real issue behind this useful warning.

		// Bad code example
		int demo(char ch, int *data) {
			return data[ch];
		}
		
	- *The root problem is that the C programming language defines several data types for "characters"*:

		char can hold a "character from the basic execution character set"
		 (which includes at least A-Z, a-z, 0-9 and several punctuation characters).
		 
		unsigned char can hold values from at least the range 0 to 255.
		signed char can hold values from at least the range -127 to 127.

	- The C standard defines that the type char behaves in the same way as either signed char or unsigned char.
		Which of these types is actually chosen depends on the compiler and the operating system and must be documented by them.

	- When an element of an array is accessed by the arr[index] expression, GCC calls the index a subscript.
		In most situations, this array index is an unsigned integer.
		This is common programming style, and languages like Java or Go throw an exception if the array index is negative.

	- In C, out-of-bounds array indices are simply defined as invoking undefined behavior.
		The compiler cannot reject negative array indices in all cases since the following code is perfectly valid:

		const char *hello = "hello, world";
		const char *world = hello + 7;
		char comma = world[-2];   // negative array index

	- There is one place in the C standard library that is difficult to use correctly,
		 and that is the character classification functions from the header <ctype.h>,
		 such as isspace. The expression isspace(ch) looks as if it would take a character as its argument:

		isspace(' ');
		isspace('!');
		isspace('ä');
		
	- The first two cases are ok since the space and the exclamation mark come from the basic
		 execution character set and are thus defined to be represented the same,
		 no matter whether the compiler defines char as signed or as unsigned.

	- But the last case, the umlaut 'ä',
		 is different. It typically lies outside the basic execution character set.
		 In the character encoding ISO 8859-1, which was popular in the 1990s,
		 the character 'ä' is represented like this:

		unsigned char auml_unsigned = 'ä';   // == 228
		signed   char auml_signed   = 'ä';   // == -28
		Now imagine that the isspace function is implemented using an array:

		static const int isspace_table[256] = {
			0, 0, 0, 0, 0, 0, 0, 0,
			1, 1, 1, 0, 0, 1, 0, 0,
			// and so on
		};

		int isspace(int ch)
			{
				return isspace_table[ch];
			}
	- This implementation technique is typical.

	- Getting back to the call isspace('ä'),
		assuming that the compiler has defined char to be signed char and that the encoding is ISO 8859-1.
		When the function is called, the value of the character is -28, and this value is converted to an int,
		preserving the value.

	- This results in the expression isspace_table[-28], which accesses the table outside the bounds of the array.
		This invokes undefined behavior.

	- It is exactly this scenario that is described by the compiler warning.

	- The correct way to call the functions from the <ctype.h> header is either:

	// Correct example: reading bytes from a file

			int ch;
			while ((ch = getchar()) != EOF) {
				isspace(ch);
			}

	// Correct example: checking the bytes of a string

			const char *str = "hello, Ümläute";
			for (size_t i = 0; str[i] != '\0'; i++) {
				isspace((unsigned char) str[i]);
			}
			
		- There are also several ways that look very similar but are wrong.

	// WRONG example: checking the bytes of a string

			for (size_t i = 0; str[i] != '\0'; i++) {
				isspace(str[i]);   // WRONG: the cast to unsigned char is missing
			}

	// WRONG example: checking the bytes of a string

			for (size_t i = 0; str[i] != '\0'; i++) {
				isspace((int) str[i]);   // WRONG: the cast must be to unsigned char
			}
			
		- The above examples convert the character value -28 directly to the int value -28, thereby leading to a negative array index.

	// WRONG example: checking the bytes of a string
			for (size_t i = 0; str[i] != '\0'; i++) {
				isspace((unsigned int) str[i]);   // WRONG: the cast must be to unsigned char
			}
			
		- This example converts the character value -28 directly to unsigned int.
			 Assuming a 32-bit platform with the usual two's complement integer representation,
			 the value -28 is converted by repeatedly adding 2^32 until the value is in the range of unsigned int.
			 In this case this results in the array index 4_294_967_268, which is much too large.*/
}
