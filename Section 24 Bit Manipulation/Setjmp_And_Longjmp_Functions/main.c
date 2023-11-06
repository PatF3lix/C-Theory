#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf buf; //jmp off global variable

void myFunction() {
    printf("\nIn myFunction()\n");
    longjmp(buf, 1);

    // NOT REACHED
    printf("You will never see this, because I longjmped");
}

int main()
{
    //Example 1
//    int i = setjmp(buf); // setjump returns 0
//    printf("i=%d\n", i);
//
//    //this is necessary, because if this if condition would not be here, we would be stuck in an infinite loop
//    if(i != 0)
//        exit(0);
//
//    longjmp(buf, 42);
//    printf("Does this line get printed ?");

    //Example 2 //Jumping back and forth between functions
//    if(setjmp(buf)){
//        printf("Back in main\n");
//    }else{
//    printf("First time through");
//    myFunction();
//    }
    //Example 3 //Try catch exemple  (error recovery)

    switch(setjmp(jbuf)){
        case 0:
            apple = *suspicious;
            break;
        case 1:
            printf("Suspicious is indeed a bad pointer\n");
            break;
        default:
            die("unexpected value returned by setjmp");
    }

    // what this example would need is a handler for the segmentation violation signalwhich you can do with the corresponding longjmp
    return 0;
}
