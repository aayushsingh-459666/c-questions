#include <stdio.h>
#include <conio.h>

//  Write a program which takes 10 intergers as input and finds the smallest number among them.

int main(){
    int a[10],i,s=0;

    // Taking input from the user.
    printf("Enter your 10 numbers:\n");

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    s = a[0];

    for(i=0;i<10;i++){
        if(a[i]<s){
            s = a[i];
        }
    }
    printf("The smallest number is %d",s);

}