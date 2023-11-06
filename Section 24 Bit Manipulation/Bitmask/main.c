#include <stdio.h>
#include <stdlib.h>

int main()
{

    //example 1 turning on  bits using |
    int flags = 15; //0000 1111
    int mask = 182; //1011 0110

    flags = flags | mask; // 1011 1111

    //example 2 turning off  bits using &
    int flags2 = 15; //0000 1111
    int mask2 = 182; //1011 0110

    flags = flags & mask; // 0000 0110

    //example 3 Toggling bits using XOR
    int flags3 = 15; //0000 1111
    int mask3 = 182; //1011 0110

    flags = flags ^ mask; // 1011 1001

    //example 4 Check the value of a bit
    int flags4 = 15; //0000 1111
    int mask4 = 8; //0000 1000

    if((flags4 & mask4) == mask4)
        printf("the forth bit is turned on");

    return 0;
}
