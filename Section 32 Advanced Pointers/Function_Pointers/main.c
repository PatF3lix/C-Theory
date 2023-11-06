#include <stdio.h>
#include <stdlib.h>

//eample 1
int somedisplay(){
    printf("Inside someDisplay function");
    return 1;
}

//example 2
 void funct1(int);
 void funct2(int);

typedef void Functype(int);

int main()
{
    //example 1
    int (*func_ptr)();

    func_ptr = somedisplay;

    printf("\nAddress of function somedisplay is %p\n", func_ptr);
    //function call
    (*func_ptr)();

    //example 2
    Functype *func_ptr2 = NULL;

    func_ptr2 = funct1;
    
    (*func_ptr2) (100);

    func_ptr2 = funct2;

    (*func_ptr2) (200);

    return 0;
}

 void funct1(int x) {
    printf("\nfunct1 display num: %d\n", x);
 }
 void funct2(int x){
    printf("funct2 display num: %d\n", x);
 }
