#include <stdio.h>

int main(void)
{
	FILE *fp;
    
    fp = fopen("Exercise_5_Writting_Strings_To_Text_File/file5.txt", "w");
    
    fputs("This is Patrick Felix.\n", fp);
    fputs("I am happy to be here.\n", fp);
    
    fclose(fp);
	return 0;
}