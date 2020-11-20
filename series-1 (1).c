/**
1+2+3+4....
a=1,d=1
*/
#include<stdio.h>
main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum =sum + i;
    }
    printf("%d\n",sum);
}
