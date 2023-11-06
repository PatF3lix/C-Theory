#include <stdio.h>
#include <stdlib.h>


//example 1 normal union defintion
union car {
int i_value;
float f_value;
char c_value[40];
};

//example 2 anonymous union definition
//anonymous union is an unamed member union of a structure or a union
struct owner {
    char socsecurity[12];
};

struct leasecompany {
    char name[40];
    char headquarters[40];
};

struct car_data {
    char make[15];
    int status; // 0 = owned, 1 = leased
    //anonymous union
    union {
        struct owner owncar;
        struct leasecompany;
        };
};

//example 3
struct {
    char *name;
    enum symbolType type; //assume the enum is defined somewhere
    union { //holding a union called data
        int i;
        float f;
        char c;
    } data;
} table [entries]; //creates an array called table holding x entries of type struct

int main()
{
    union car car1, car2, *car3;

    //finding out the size of the union ->
    printf("Memory size occupied by car: %zu\n", sizeof(car1));

    return 0;
}
