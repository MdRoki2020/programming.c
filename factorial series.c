#include <stdio.h>
int main ()
{
    int sum=1,i,n;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("%d! is equal : %d",n,sum) ;

    getch ();
}
