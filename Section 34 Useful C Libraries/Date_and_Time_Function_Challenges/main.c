#include <stdio.h>
#include <stdlib.h>
#include <time.h>

///*ctrl + swift + c to comment
///ctrl + swift + x to uncomment*/

//challenge 1 using srand()

#define N 50
int main()
{
    int i = 0;
    char str = '\0';
    srand(time(NULL));
    printf("%d\n", N);

    for(i = 1; i <= N; i++){
        printf("%.4lf\n", (rand() % 2001 - 1000) / 2.e3);
    }

    return 0;
}

//challenge 2 using rand and qsort

//#define NUM 40
//void fillarray(double ar[], int n);
//void showarray(const double ar[], int n);
//int mycomp(const void * p1, const void *p2);
//
//int main() {
//
//    double vals[NUM];
//    fillarray(vals,NUM);
//    puts("Random list:");
//    showarray(vals,NUM);
//    qsort(vals, NUM, sizeof(double), mycomp);
//    puts("\nSorted list: ");
//    showarray(vals, NUM);
//    return 0;
//}
//
//void fillarray(double ar[], int n) {
//    int index;
//
//    for(index = 0; index < n; index++)
//        ar[index] = (double)rand() / ((double) rand() + 0.1);
//}
//
//void showarray(const double ar[], int n) {
//    int index;
//    for(index = 0; index < n; index++){
//        printf("%9.4f", ar[index]);
//        if(index % 6 == 5)
//            putchar('\n');
//    }
//
//    if(index % 6 != 0)
//        putchar('\n');
//}
//
///* sort by increasing value */
//int mycomp(const void * p1, const void * p2){
//
//    /* need to use pointers to double to access values */
//    const double * a1 = (const double *) p1;
//    const double * a2 = (const double *) p2;
//
//    if(*a1 < *a2)
//        return -1;
//    else if (*a1 == *a2)
//        return 0;
//    else
//        return 1;
//}


//challenge 3 time functions and system function exit()


//challenge 4 time functions time() and difftime()

//int main() {
//
//    time_t now;
//    time(&now);
//
//    struct tm beg_month;
//    beg_month = *localtime(&now);
//    beg_month.tm_hour = 0;
//    beg_month.tm_min = 0;
//    beg_month.tm_sec = 0;
//    beg_month.tm_mday = 1;
//
//    double seconds = difftime(now, mktime(&beg_month));
//    printf("\n %.f seconds passed since the beginning of the month.\n\n", seconds);
//
//}

