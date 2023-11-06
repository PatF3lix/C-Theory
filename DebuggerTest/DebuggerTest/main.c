#include <stdio.h>

//CallStack exemple taken from https://cs.gmu.edu/~kauffman/cs222/stack-demo.html

int mogrify(int a, int b){
    int tmp = a*4 - b / 3;                  // First line of mogrify (mogrify)
    return tmp;                             // (mogrify_return)
}

double truly_half(int x){
    double tmp = x / 2.0;                   // First line of turly_half (truly_half)
    return tmp;                             // (truly_half_return)
}

int main(){
    int a = 7, y = 17;                      // First line of main (main)
    int mog = mogrify(a,y);                 // Call to mogrify (mogrify_call)
    printf("Done with mogrify\n");          // (first_print)

    double x = truly_half(y);               // Call to truly_half (truly_half_call)
    printf("Done with truly_half\n");       // (second_print)

    a = mogrify(x,mog);                     // (mogrify2)

    printf("Results: %d %lf\n",mog,x);      // (last_print)
    return 0;             
}
