#include <stdio.h>

int main(int argc, char **argv)
{
	long multiple[] = {15L, 25L, 35L, 45L};
    long *p = multiple;
        //sizeof(multiple) = total bytes of array / sizeof(multiple[0] = the bytes of 1 element in the array
    for(int i = 0; i < sizeof(multiple) / sizeof(multiple[0]); i++)
        printf("address p + %d(&multiple[%d]):%llu\t*(p+%d)	value: %ld\n",
                i, i, (unsigned long long) (p + i), i, *(p + i));
                
    printf("\n\tType long occupies: %d bytes\n",(int)sizeof(long));
	return 0;
}
