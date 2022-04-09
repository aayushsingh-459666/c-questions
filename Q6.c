#include <stdio.h>

// Q - Write a program  that accept 2x2 matrix and display it.

void main(){
    int a[2][2],i,j;

    printf("Enter the 2x2 matrix value in int:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Input R%d x C%d :",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf(" \t %d",a[i][j]);
        }
        printf("\n");
        
    }
    
}