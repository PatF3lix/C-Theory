#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "Exercise_7_UpperCase_To_LowerCase_Read_Write/file7.txt"
#define TEMP "Exercise_7_UpperCase_To_LowerCase_Read_Write/temp.txt"

//This program works correctly 

int main()
{
	
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    
    char ch = ' ';
    
    fp1 = fopen(FILENAME, "r");
    
    if(!fp1)
        return -1;
    
    //create a temp file
    fp2 = fopen(TEMP, "w+");
    
    if(!fp2)
        return -1;
    
    while ((ch = fgetc(fp1)) != EOF ){
        //Verify if char is upper case
        if(isupper(ch))
            //if true added 32 to it to make it lowercase
            ch += 32;
        fputc(ch, fp2);
    }
    
    fclose(fp1);
    fclose(fp2);
    fp2 = NULL;
    
    char answer = ' ';
    printf("did tolower work ? [y/n]: ");
    scanf(&answer);
    
    //Remove the file7.txt
    remove(FILENAME);
    
    //Rename temp file to test.txt
    rename(TEMP, FILENAME);
    
    //Remove the temp.txt file
    remove(TEMP);
    
    fp1 = fopen(FILENAME, "r");
    
    if(!fp1)
        return -1;
    
    while ((ch= fgetc(fp1)) != EOF){
        printf("%c", ch);
    }
    
    fclose(fp1);
    fp1 = NULL;
	return 0;
}
