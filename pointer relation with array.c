#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i;
    int sum=0;

    int a[5]={1,2,3,4,5};

    for(i=0;i<5;i++){
        //sum=sum+a;
        printf("%d ",*(a+i));
    }



    getch ();
}
