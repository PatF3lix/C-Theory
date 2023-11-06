#include <stdio.h>
#include <stdlib.h>

struct item
{
    char *itemName;
    int qty;
    float price;
    float amount;
};


void readItem(struct item *i);
void printItem(struct item *i);

int main(int argc, char **argv)
{
	struct item itm = { NULL, 0, 0.0, 0.0 }, *pItem = &itm;
    //allocating space for char* itemName
    pItem->itemName = (char *) malloc(30 * sizeof(char));
    
    //making sure pItem isn't just pointing anywhere
    if(pItem == NULL)
        exit(-1);

    // read item
    readItem(pItem);

    // print item
    printItem(pItem);

    free(pItem->itemName);
    
	return 0;
};

void readItem(struct item *i)
{
    printf("Enter product name: ");
    scanf("%s", i->itemName);

    printf("\nEnter price: ");
    scanf("%f", &i->price);

    printf("\nEnter quantity: ");
    scanf("%d", &i->qty);

    i->amount = (float)i->qty * i->price;
};

void printItem(struct item *i)
{
    /*print item details*/
    printf("\nName: %s",i->itemName);
    printf("\nPrice: %.2f",i->price);
    printf("\nQuantity: %d",i->qty);
    printf("\nTotal Amount: %.2f\n",i->amount);
};