#include <stdio.h>
#include <stdlib.h>

struct date
{
    int month;
    int day;
    int year;
};

int main(int argc, char **argv)
{
    struct date today, *datePtr = &today;

    datePtr->month = 6;
    datePtr->day = 23;
    datePtr->year = 23;
    
    printf("Today's date is %i-%i-%.2i.\n", datePtr->month, datePtr->day, datePtr->year %100);
	return 0;
}
