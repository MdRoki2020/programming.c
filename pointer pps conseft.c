#include <stdio.h>
int main ()
{
    int b=15;

    int *p1=&b;

    printf("address of Variable b: %x\n",p1);
    printf("Value of Variable b: %d\n",*p1);


    getch ();
}
