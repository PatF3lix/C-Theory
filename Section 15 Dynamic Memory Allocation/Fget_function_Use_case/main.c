#include <stdio.h>

int main(int argc, char **argv)
{
	  char str[20];
  printf("Enter some text: ");
  fgets(str, 20, stdin); // read from stdin
  puts(str); // print read content out to stdout
  
  // open the file
  //"TextFiles/file2.txt" or file.txt
  FILE *f = fopen("file.txt", "r"); 
  // if there was an error
  if(f == NULL){
    perror("Error opening file"); // print error
    return(-1); 
  }
  // if there was no error
  else{ 
    fgets(str, 20, f); // read from file
    puts(str); // print read content out to stdout
  }
  
  fclose(f); // close file
	return 0;
}
