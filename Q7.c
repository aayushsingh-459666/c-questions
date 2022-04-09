#include <stdio.h>

// Q - Write a program that accept 2x2 matrix and find their sum.


void main(){
    int a[2][2],b[2][2],s[2][2],i,j;

    printf("Enter your values for A matrix: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Input R%d x C%d : \t",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter your values for B matrix: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Input R%d x C%d : \t",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)  
        {
            s[i][j] = a[i][j] + b[i][j];
            
        }
        
    }

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
        
    }
    
    
}