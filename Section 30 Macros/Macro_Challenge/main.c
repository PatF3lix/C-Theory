#include <stdio.h>
#include <stdlib.h>

/* Print the values of the predefined macros */

//Right-click on Macro_challenge, then add files, to see chanllenge 2, 3, 4

int main()
{
    //Challenge 1
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ %s\n", __FILE__);
    printf("__DATE__ %s\n", __DATE__);
    printf("__TIME__ %s\n", __TIME__);
    printf("__STDC__ %s\n", __STDC__);

    return 0;
}
