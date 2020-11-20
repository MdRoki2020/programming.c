#include <stdio.h>
int main ()
{
    int a=5;
    int *p=&a;
    int **pp=&p;

    printf("Address of a: %x\n",p);
    printf("value of p: %x\n",*p);
    printf("Address of p: %x\n",&p);


    //main point
    printf("Address of a: %x\n",&pp);
    printf("Address of a: %x\n",**pp);



    getch ();
}
