#include <stdio.h>
#include <stdlib.h>

struct point {
    int x, y;
};

struct point2 {
    int x, y , z;
};

int main()
{
    //example 1
    int numbers[100] = {1,2,3, [3 ... 9] = 10, [10] = 80, 15, [70] = 50, [42] = 400};
    for (int i = 0; i < 20; i++)
        printf("%d ", numbers[i]);

    printf("\n%d ", numbers[70]);
    printf("%d", numbers[42]);

    //example 2
    int numbers2[] = {1,2,3, [3 ... 9] = 10, [10] = 80, 15, [70] = 50, [42] = 400};
    int n = sizeof(numbers2) / sizeof(numbers2[0]);
    printf("\nlength of numbers is : %d", n);

    //example 3
    struct point p = { .y = 2, .x = 3};
    //or
    struct point l = { y: 2, x: 3};
    //or (this will initialize element in the order ther were declared in the struct)
    struct point m = { 2, 3};

    //example 4
    struct point p1 = { .y = 0, .z = 1, .x = 2};
    struct point p1 = { .x = 20};

    printf("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
    printf("x = %d", p2.x);

    //example 5
    struct point pts[5] = {[2].y = 5, [2].x = 6, [0].x = 2};
    int = i;
    for(i = 0; i < 5; i++){
        print("%d %d\n", pts[i].x, pts[i].y);
    }

    return 0;
}
