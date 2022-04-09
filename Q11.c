#include <stdio.h>


// Q - Write a program that accept a interger and find its factor upto it.

/**
 * It takes an integer as input and prints all the factors of that number
 */
void main(){
    int i ,a ;

    // Taking input from the user and storing it in a variable.
    printf("Enter the numbeer :\t");
    scanf("%d",&a);

    printf("The required factors are :");
    for ( i = 1; i < a; i++)
    {
        if(a%i==0){
            printf("%d \t",i);     
        }
        
    }
    
}