#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Variables of type char occupy %lu %s\n",sizeof(char),"bytes");
    printf("Variables of type char occupy %lu %s\n",sizeof(short),"bytes");
    printf("Variables of type char occupy %lu %s\n",sizeof(int),"bytes");
    printf("Variables of type char occupy %lu %s\n",sizeof(long),"bytes");
    printf("Variables of type char occupy %lu %s\n",sizeof(long long),"bytes");
    printf("Variables of type char occupy %lu %s\n",sizeof(float),"bytes");
    printf("Variables of type char occupy %lu %s\n",sizeof(double),"bytes");
    printf("Variables of type char occupy %lu %s\n",sizeof(long double),"bytes");
    
	return 0;
}
