/*Null pointer Explain: When we declare a pointer variable and if we do not leave an address inside it,
we will get garbage value when we work on it,
which is why we give the initial one pointer to its value with digler so that we can
check on that pointer Whether there is an address*/


#include <stdio.h>
int main ()
{
    int a=5;
    int *p1=NULL;

    p1=&a;

    if(p1){

        printf("%d",*p1);
    }

    else{
        printf("Not Initialized");
    }


    getch ();
}
