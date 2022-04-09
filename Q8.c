#include <stdio.h>

// Q - write a program that accept 2x2 matrix and find theri subtraction.


void main(){
    int a[2][2],b[2][2],s[2][2],i,j;

    // Taking the input from the user

     printf("Enter the value for A matrix:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Input R%d x C%d :\t",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Enter the value for B matrix:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Input R%d x C%d :\t",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            s[i][j] = a[i][j] - b[i][j];
        }
        
    }
    printf("The required answer is given below:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d \t",s[i][j]);
        }
        printf("\n");
        
    }
    
    
    
}