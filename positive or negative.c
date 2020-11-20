///Write a C program to check whether a given number is positive or negative.

#include <stdio.h>
int main ()
{
    int a;
    printf("Enter Number :");
    scanf("%d",&a);

    if(a>=0){
        printf("positive");
    }
    else{
        printf("Negative");
    }

    getch ();
}
