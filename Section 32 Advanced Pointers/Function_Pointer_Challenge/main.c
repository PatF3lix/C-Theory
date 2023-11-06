#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>


int* add(int *array1, int *array2);
int* sub(int *array1, int *array2);
int* mult(int *array1, int *array2);
int* divison(int *array1, int *array2);

void display_menu(void);
void accept_Input(int *input);
void print_results(int *results);

typedef int* Functype(int *array1, int *array2);

int main()
{
   int array1 [] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int array2 [] =  {38, 27, 87, 63, 59, 223, 132, 1, 19, 7};
   _Bool quit = 0;
   int input = 0;
   Functype *func_ptr = NULL;

   while(!quit) {
        display_menu();
        accept_Input(&input);
        int *result = NULL;
        switch(input) {
            case 1:
                func_ptr = add;
                result = func_ptr(array1, array2);
                print_results(result);
                free(result);
                result = NULL;
                break;
            case 2:
                func_ptr = sub;
                result = func_ptr(array1, array2);
                print_results(result);
                free(result);
                result = NULL;
                break;
            case 3:
                func_ptr = mult;
                result = func_ptr(array1, array2);
                print_results(result);
                free(result);
                result = NULL;
                break;
            case 4:
                func_ptr = divison;
                result = func_ptr(array1, array2);
                print_results(result);
                free(result);
                result = NULL;
                break;
            case 5:
                quit = 1;
                printf("Quiting program");
                break;
            default:
                printf("You have not entered a valid number. Please try again.");
        }
   }
    return 0;
}

int* add(int *array1, int *array2){
    int *temp = (int*)calloc(10, sizeof(int));
    for(int i = 0; i < 10; i++){
       temp[i] = array1[i] + array2[i];
    }
    return temp;
}

int* sub(int *array1, int *array2){
    int *temp = (int*)calloc(10, sizeof(int));
    for(int i = 0; i < 10; i++){
       temp[i] = array1[i] - array2[i];
    }
    return temp;
}

int* mult(int *array1, int *array2){
    int *temp = (int*)calloc(10, sizeof(int));
    for(int i = 0; i < 10; i++){
       temp[i] = array1[i] * array2[i];
    }
    return temp;
}

int* divison(int *array1, int *array2){
    int *temp = (int*)calloc(10, sizeof(int));
    for(int i = 0; i < 10; i++){
       temp[i] = array1[i] / array2[i];
    }
    return temp;
}

void display_menu(void){
    printf("\nDisplay Menu:\n");
    printf("1.Add\n");
    printf("2.Substract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.Quit\n");
}

void accept_Input(int *input) {
    printf("Enter choice [1-5]: ");
    scanf("%d", input);
}

void print_results(int *results){
    printf("\nResults: ");
        for(int i = 0; i < 10; i++){
       printf("%d  ", results[i]);
    }
    printf("\n\n");
}
