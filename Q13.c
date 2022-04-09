#include <stdio.h>

// Q - write a prom that a integer and finds whether it is prime or composite number.

/**
 * The function checks if the number is divisible by any number other than 1 and itself. If it is
 * divisible by any other number, it is a composite number
 */


void main()
{
    int i,a,p=0;

    printf("Enter your number:\t");
    scanf("%d",&a);

    for ( i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            p++;
        }      
    }

    if (p==2)
    {
        printf("%d is a prime number.",a);
    }
    
    else{
        printf("%d is a composite number.",a);
    }
    
}