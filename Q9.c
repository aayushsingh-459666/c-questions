#include <stdio.h>

// Q - write a program that accept a integer and finds the reverse of the given no.


/**
 * The function takes an integer as input and returns the reverse of the integer
 */
void main(){
    int a,b,r=1 , re =0;

    printf("Enter your number:\n");
    scanf("%d",&a);
    b = a;

    while (a!=0)
    {
        r = a%10;
        re = (re*10)+r;
        a = a/10;
    }

    printf("The reverse of %d is %d",b,re);
    
    

}