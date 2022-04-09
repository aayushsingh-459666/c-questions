#include <stdio.h>
#include <conio.h>

// Write a program which takes 10 interger in array and  sort them in descending order. and print them 

void main()
{
    int a[10], i, j, temp;

    // taking input from the user.
    printf("Enter your 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }
    }
    printf("The required value in descending order:");
    for (i = 0; i < 10; i++)
    {
        printf("%d \n", a[i]);
    }
    getch();
}