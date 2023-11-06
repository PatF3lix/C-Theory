#include <stdio.h>
#include <stdlib.h>


int count;

extern void write_extern();

int main() {

    count = 5;
    write_extern();
    return 0;
}



//int i = 5;
//
//void foo(void);
//
//int main()
//{
//    printf("%i ", i);
//    foo();
//    printf("%i \n", i);
//    return 0;
//}
