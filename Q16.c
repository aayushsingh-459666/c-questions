#include <stdio.h>
#include <string.h>

// Q - Write a proma that accept 10 string and sort them in ascending order.


void main()
{
    int i,j;
    char a[100][10],temp[100];

    // Taking input from the user 
    printf("Enter your values:\n");
    for ( i = 0; i < 10; i++)
    {
        printf("Value %d: \t",i+1);
        scanf("%s",a[i]);
        printf("\n");


    }


    for ( i = 0; i < 10; i++)    
    {
        for ( j = i; j < 10; j++)
        {
            if (strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
            
        }
        
       
    }

    printf("The required output is given below:\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%s \n",a[i]);
    }
    

}