#include <stdio.h>
int main ()
{
    int a,b,sum;
    printf("Enter First and Second Numbers: ");
    scanf("%d %d",&a,&b);

    int *ptr1;
    int *ptr2;

    ptr1=&a;
    ptr2=&b;

    sum=*ptr1+*ptr2;


    printf("Sum of two numbers: %d",sum);



    getch ();
}
