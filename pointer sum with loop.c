#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5]={2,5,8,0,1};
    int sum=0;
    int i;

    for(i=0;i<5;i++){
        sum=sum+*(a+i);
    }
       printf("%d\n",sum);



    getch ();
}
