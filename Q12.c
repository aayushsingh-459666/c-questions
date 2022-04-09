#include <stdio.h>


// Write a program that accept a interger and finds its factorial.

void main()
{
    int i,a,fa=1;

    printf("Enter the number:\t");
    scanf("%d",&a);

    for ( i = 1; i <= a; i++)
    {
        fa = fa*i;
    }
    
    printf("The required factorial is %d",fa);
}