///4+9+14+19+......+n
#include <stdio.h>
int main ()
{
    int n,i=1,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    while(i<=n){
        sum=sum+i*5-1;
        i++;
    }
    printf("4+9+14+19+......+%d= %d",n,sum);

    getch ();
}

