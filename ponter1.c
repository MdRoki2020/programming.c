#include <stdio.h>
int main ()
{

    int a,b;
    a=5;

    int *ptr=&a;

    printf("Address of a:  %x\n",ptr);
    printf("Value of a:  %d",*ptr);


    getch ();
}
