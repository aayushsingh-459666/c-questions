#include <stdio.h>
#include <string.h>

// Q - write a progam that accept a string and finds its reverse.

/**
 * The function strrev() takes a string as an argument and returns a reversed string
 */

void main()
{
    char a[100] ;
    printf("Enter the value for str: \t");
    scanf("%s",&a);

    strrev(a);
    puts(a);


}