#include <stdio.h>
int main()
{
    int sum=0,i=1,n;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i;i<=n;i++){

        sum=sum+i;
    }

    printf("1+2+3+....+%d\nThe Equation Of series value: %d",n,sum);

    getch ();
}
