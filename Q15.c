#include <stdio.h>

// Q - Write a program that accept a string and finds its reverse without using the library function.

/**
 * It takes a string as input and prints it in reverse order
 */

void main()
{
    int i=0,c=0;
    char a[100];

    printf("Enter your value for rev:\t");
    scanf("%s",&a);
    
    while(a[i] != '\0')
    {
        i++;
        c++;
    }

    c--;
    
    while(c>=0)
    {
       printf("%c",a[c]);
       c--;
    }
    
}