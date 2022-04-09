#include <stdio.h>
#include <string.h>

// Q - Write a program that accept 10 string and sort them in descending order.

void main()
{
    int i,j;
    char a[100][10],temp[100];

    printf("Enter the value for str:\n");
    for ( i = 0; i < 10; i++)
    {
        printf("Enter value %d :",i+1);
        scanf("%s",&a[i]);
        printf("\n");
    }

    for ( i = 0; i < 10; i++)
    {
        for ( j = i; j < 10; j++)
        {
            if (strcmp(a[i],a[j])<0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
                
            }    
        }   
    }

    printf("The requird output is given below:\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%s \n",a[i]);
    }
    
    
    
}