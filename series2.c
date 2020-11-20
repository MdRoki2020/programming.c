///3+5+7+9+....
#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("Enter number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i*2+1;
    }
    printf("3+5+...+%d= %d\n",n,sum);

    return 0;
}
