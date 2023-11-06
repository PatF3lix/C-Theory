#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

struct stack {
    int stk[MAXSIZE];
    int top;
};

typedef struct stack STACK;

STACK s;

void push(void);
int pop(void);
void display(void);



int main()
{
    int choice= 0;
    int option = 1;
    s.top = -1;

    while(option) {
        printf("---------------------------\n");
        printf("1- Push\n");
        printf("2- Pop\n");
        printf("3- Display\n");
        printf("4- Exit\n");

        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
            }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1) ? \n");
        scanf("%d", &option);
    }
    return 0;
}

void push(void){
    int num = 0;
    if(s.top == (MAXSIZE - 1)){
        printf("Stack is Full\n");
        return;
    }else{
        printf("Enter the element to be pushed\n");
        scanf("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
}
int pop(void){
    int num = 0;
    if(s.top == -1){
        printf("Stack is Empty\n");
        return(s.top);
    }else{
        num = s.stk[s.top];
        printf("popped element is = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return (num);
}
void display(void){
    int i = 0;
    if(s.top == -1) {
        printf("Stack is empty\n");
        return;
    }else{
        printf("\nthe status of the stack is \n");
        for(i = s.top; i >= 0; i--){
            printf("%d\n", s.stk[i]);
        }
    }
    printf("\n");
}
