///Write a C program to check whether a given number is even or odd.

#include <stdio.h>
int main ()
{
    int a;
    printf("Enter Number :");
    scanf("%d",&a);

    if(a%2==0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }


    getch();
}
