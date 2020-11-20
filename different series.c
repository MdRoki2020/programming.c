///4+9+14+19+......+n
#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i*5-1;
    }
    printf("4+9+14+19+......+%d= %d",n,sum);

    getch ();
}
