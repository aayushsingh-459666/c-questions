#include <stdio.h>
#include <conio.h>

// Write a program which takes 10 integer value in array and sort them in ascending order and print them.

int main()
{

    int a[10], i, j, temp;

    // taking input from the user
    printf("Enter your values to be sorted:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("The required sorted of numbers in ascending order are: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d \n", a[i]);
    }
    getch();

    return 0;
}