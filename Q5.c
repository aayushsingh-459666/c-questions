#include <stdio.h>

// Q - Write a program that takes nth term of integers and sorts them in ascending order.

void main()
{
    int a[100], i, j, n, temp;

    printf("Enter your nth term for interger");
    scanf("%d", &n);

    // Taking the nth terms of intergers as input
    printf("Now enter the %d intergers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (i = j; i < n; i++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("The result fo nth term of intergers in ascending order are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
}