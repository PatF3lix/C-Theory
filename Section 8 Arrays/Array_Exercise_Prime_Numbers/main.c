#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	
    int p = 0;
    int i =0;
    //C99 lets you initiale all indexes to 0     
    int primes[50] = {0};
    int primeIndex = 2;
    
    bool isPrime = false;
    
    //hardcode Prime numbers
    primes[0] = 2;
    primes[1] = 3;
    
    /*All even numbers after 2 cannot be a prime number by default 
    because a prime numbers must be only dividable by 1 and itself.
    which is why we jump by two.*/
    
    for(p = 5; p <= 100; p += 2){
        isPrime = true;
        /*If a number ‘n’ is not divided by any number less than or equals to the square root of n then,
         it will not be divided by any other number greater than the square root of n.
         So, we only need to check up to the square root of n. what this check is fors: p / primes[i] >= primes[i];*/ 
        for (i = 1; isPrime && p / primes[i] >= primes[i]; i++){
            if(p % primes[i] == 0)
                isPrime = false;
        }
        
        if (isPrime == true){
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }
    
    for(int i =0; i < primeIndex; i++){
        printf("%i  ", primes[i]);
    }
    
    printf("\n");
	return 0;
}
