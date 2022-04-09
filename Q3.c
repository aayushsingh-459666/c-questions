#include <stdio.h>
#include <conio.h>


// Write a program which takes 10 intergers as input and find the greatest among them.


int main(){
    int a[10],i,g;

    printf("Enter your 10 intergers: \n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    g = a[0];

    for ( i = 0; i < 10; i++){
        if(a[i]>g){
            g = a[i];
        }

    }
    printf("The grreatest number is %d",g);
    return 0;
}