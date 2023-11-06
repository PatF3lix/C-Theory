#include <stdio.h>
#include <stdlib.h>

//example 1
#define JUST_CHECKING
#define LIMIT 4

//---------------------------------

//example 2
#define MYDEF 4
//#define MYOTHERDEF 2

//---------------------------------

//example 3

#define US 0
#define UK 1
#define France 2
#define Germany 3
#define Country France

int main()
{

    //example 1 #define, #ifdef, #endif
    int i = 0;
    int total = 0;

    for(i = 1; i <= LIMIT; i++){
        total += 2*i*i + 1;
        //if JUST_CHECKING is defined above in the file it will execute the following code
        #ifdef JUST_CHECKING
            printf("i = %d, running total = %d\n", i, total);
        #endif // JUST_CHECKING
        //the main reason why you want to do this is that it helps with debugging
    }
    printf("Grand total = %d\n", total);

    //--------------------------------------------------------------------------------------------

    //example 2 #if #ifndef

    // since MYOTHERDEF is not define this code will not execute
    // logical operators can be used with #if #ifndef
    #if MYDEF == 5 && MYOTHERDEF == 2
        printf("Hello");
    #endif // MYDEF
    //this will execute the code because MYOTHERDEF is commented out
    #ifndef MYOTHERDEF
        printf("MYOTHERDEF is not defined\n");
    #endif // MYDEF

    //--------------------------------------------------------------------------------------------

    //example 3 #if #elif

    #if Country == US || Country == UK
        #define Greeting "Hello."
    #elif Country == France
        #define Greeting "Bonjour."
    #elif Country == Germany
        #define Gretting "Guten Tag."
    #endif // Country

    printf("Greeting is %s", Greeting);

    return 0;
}
