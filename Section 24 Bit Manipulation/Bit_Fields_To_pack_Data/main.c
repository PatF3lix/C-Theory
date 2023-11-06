#include <stdio.h>
#include <stdlib.h>



struct packed_struct {
//normal types can also be added in a data struct of bit fields
//    int count;
//    char c;

    unsigned int:3; //used for padding the unused bits in a 32 bits integer
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;
    unsigned int index:18;
};

//no such thing as a pointer to a bit field

//you can also initialize the bit values
//struct packed_struct packed_data = {1,1,0, 10, 1500};
int main()
{
    struct packed_struct packed_data;
    //assigned data to packed_data
    packed_data.type = 7;
    //extract data from packed_data
    unsigned int bit = packed_data.type;
    //can be used in arithmetic operations
    unsigned int i = packed_data.index / 5 +1;

    if(packed_data.f2){
        printf("f2 is set to 1");
    }

    return 0;
}
