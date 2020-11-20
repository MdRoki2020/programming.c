#include <stdio.h>
int main ()
{

    int i;

    int a[5]={10,20,30,40};

    printf("address of elements are: \n");

    for(i=0;i<=5;i++)
    {


        printf("address of a[%d]=%x\n",i,&a[i]);
    }


    getch ();
}
