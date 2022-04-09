#include <stdio.h>

// Q - Write a program that finds the given number is armstrong or not.

/**
 * The function takes an integer as input and checks whether the number is an armstrong number or not
 */
void main(){
    int a,b=0,r=1,re=0;

    printf("Enter  the number:\t");
    scanf("%d",&a);
    b = a;

    while (a != 0)
    {
        r = a%10;
        re = (re*10)+r;
        a = a/10;
    }

    if(b==re){
        printf("The given number %d = the reversed number %d.So it is armstrong number.",b,re);
    }
    
    else{
        printf("The given number is not armstrong.");
        
    }
}