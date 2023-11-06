#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    
    //How to use Enums    
	enum gender {male, female};
    enum gender myGender;
    myGender = male;
    enum gender anotherGender = female;
    bool isMale = myGender == anotherGender;
//    printf("%d", isMale);
    //Enums Challenge
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company google = GOOGLE;
    enum company xerox = XEROX;
    enum company ebay = EBAY;
    printf("%d \n", xerox);
    printf("%d \n", google);
    printf("%d \n", ebay);
    
    //How to use char 
    char myCharacter = '\n';
    printf("%c", myCharacter);
        
	return 0;
}
