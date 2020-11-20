///4*2+7*3+10*4+13*5+......+n       // sum=sum+i*3+1   //sum=sum+i*1+1   //sum=sum+(i*3+1)*(i*1+1)
#include <stdio.h>
int main ()
{
    int n,i,sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
       sum=sum+(i*3+1)*(i*1+1);
    }
    printf("4*2+7*3+10*4+13*5+....+n= %d",sum);

    getch ();
}
