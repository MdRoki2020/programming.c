///Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter First Number :");
    scanf("%d",&a);

    printf("Enter second Number");
    scanf("%d",&b);

    if(a==b){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }



    getch ();
}
