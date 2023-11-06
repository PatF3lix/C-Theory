#include <stdio.h>
#include <stdlib.h>

/* self-referential structure*/

typedef struct node {
    char data;
    struct node * nextPtr;
} node_t;

typedef node_t *ListNodePtr; //pointer to structure
/* prototypes*/

//List methods prototypes
void insert(ListNodePtr *head, char value);
void insertAtEnd(ListNodePtr *head, char value);
void insertAtBeginning(ListNodePtr * head, char val);
char deleteElement(ListNodePtr *head, char value);
void deleteAtBeginning(ListNodePtr * head);
int isEmpty(ListNodePtr head);
void printList(ListNodePtr currentPtr);

//function prototypes
void display_menu();
int accept_user_choice();
char accept_user_char();
void operation(int choice, ListNodePtr *head);

int main()
{
    ListNodePtr head = NULL; // initially null, there are no nodes
    int choice= 0; // user's choice
    while(choice != 6){
        display_menu();
        choice = accept_user_choice();
        operation(choice, &head);
    }

    printf("End of run.\n");

    return 0;
}

/* Insert a new value into the list in sorted order*/
void insert(ListNodePtr *head, char value) {
    ListNodePtr newPtr;        /* pointer to new node*/
    ListNodePtr previousPtr; /* pointer to previous node in list */
    ListNodePtr currentPtr; /* pointer to current node in list */

    newPtr = malloc(sizeof(node_t)); /* create node */

    if( newPtr != NULL) { /* is space available*/
        newPtr->data = value; //place value in node
        newPtr->nextPtr = NULL; //node does not link to another node

        previousPtr = NULL;
        currentPtr = *head;

        /*insert new node at beginning of list*/
        if(previousPtr == NULL) {
            newPtr->nextPtr = *head;
            *head = newPtr;
        }else{ /*insert new node between previousPtr and currentPtr*/
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }else{
        printf("%c not inserted. No memory available.\n", value);
    }
}

void insertAtBeginning(ListNodePtr *head, char value){
    ListNodePtr new_node = malloc(sizeof(node_t));
    new_node->data = value;
    new_node->nextPtr = *head;
    *head = new_node;
}

void insertAtEnd(ListNodePtr * head, char val) {
    ListNodePtr current = *head;
    if(current != NULL) {
        //this loop enables you to point to the last element in the list
        while(current->nextPtr != NULL){
            current = current->nextPtr;
        }
        /* now we can add a new variable */
        current->nextPtr = malloc(sizeof(node_t)); //replace the null with a new node address
        current->nextPtr->data = val; //inserts the val inside the new node
        current->nextPtr->nextPtr = NULL; //set the precedent node_pointer to null
    }else{
        current = malloc(sizeof(node_t));
        current->data = val;
        current->nextPtr = NULL;
        *head = current;
    }
}

void deleteAtBeginning(ListNodePtr * head){
    ListNodePtr tempPtr = NULL; //temporary node pointer

    if(head == NULL){
        return;
    }else{
        tempPtr = *head; //hold onto node being removed
        *head = (*head)->nextPtr; //de-threaded the node
        free(tempPtr);
    }
}

char deleteElement(ListNodePtr *head, char value) {
    ListNodePtr previousPtr; /* pointer to previous node in list */
    ListNodePtr currentPtr; /* pointer to current node in list */
    ListNodePtr tempPtr;        /* temporary node pointer*/

    /* delete first node*/
    if(value == (*head) -> data){
        tempPtr = *head; /* hold onto node being removed*/
        *head = (*head)->nextPtr;   //de-thread node
        free(tempPtr); // free the de-threaded node
        return value;
    }else{
        previousPtr = *head;
        currentPtr = (*head)->nextPtr;

        /* loop to find the correct location in the list */
        while( currentPtr != NULL && currentPtr->data != value){
            previousPtr = currentPtr;           /*walk to ... */
            currentPtr = currentPtr->nextPtr;   /*... next node */
        }

        if(currentPtr != NULL) {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }
    return '\0';
}

void printList(ListNodePtr currentPtr) {

    if(currentPtr == NULL){
        printf("List is empty.\n\n");
    }else{
        printf("The list is:\n");
        while(currentPtr != NULL) {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n\n");
    }

}

void operation(int choice, ListNodePtr *head){
    char item = '\0'; //char entered by user
    switch(choice){
        case 1:                             //insert item in list
            item = accept_user_char();
            insert(head, item);
            printList(*head);
            break;
        case 2:                             //insert item at end
            item = accept_user_char();
            insertAtEnd(head, item);
            printList(*head);
            break;
        case 3:                             //insert item at the beginning
            item = accept_user_char();
            insertAtBeginning(head, item);
            printList(*head);
            break;
        case 4:                             //delete an element
            //if list is not empty
            if(!isEmpty(*head)) {
                printf("Enter character to be deleted: ");
                scanf("\n%c", &item);

                //if character is found, remove it
                if(deleteElement(head, item)){
                    printf("%c deleted.\n", item);
                    printList(*head);
                }else{
                    printf("%c not found.\n\n", item);
                }
             }else{
                printf("List is empty.\n\n");
             }
            break;
        case 5:                             //delete an item at beginning
            /*if list not empty*/
            if(!isEmpty(*head)){
                /*if character is found, remove it*/
                deleteAtBeginning(head);
                printf("%c deleted.\n", item);
                printList(*head);
            }else{
                printf("List is empty.\n\n");
            }
            break;
        case 6:
            printf("\nQuiting program!\n");
            break;
        default:
            printf("Something that should not have happened when wrong!");
    }
}

int isEmpty(ListNodePtr head) {
    return head == NULL;
}

char accept_user_char(){
    char item = '\0'; //char entered by user
    printf("Enter a character: ");
    scanf("\n%c", &item);
    return item;
}

void display_menu() {
    char *menu [] = {
    "---------- Display Function Menu ----------\n",
    "to insert an element into the list in alphabetical order.\n",
    "to insert an element at the end of the list.\n",
    "to insert an elemnt at the beginning of the list.\n",
    "to delete an element from the list.\n",
    "to delete an element from the beginning of the list.\n",
    "to Quit the program.\n"};

    int i = 0;
    int arrlen = sizeof(menu) / sizeof(menu[i]);
    while(i < arrlen){
        if(i == 0)
            printf(menu[i]);
        else
            printf("%d-%s",i,menu[i]);
        i++;
    }
}

int accept_user_choice(){
    int choice = 0;
    printf("Enter your choice: ");
    if(scanf("%d", &choice) != 1 || choice > 6 || choice < 1){
        printf("You have entered an invalid option");
        exit(EXIT_FAILURE);
    }
    return choice;
}
