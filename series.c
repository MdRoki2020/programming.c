#include<stdio.h>
main()
{
    int i,sum=3,n;
    scanf("%d",&n);
    for(i=3;i<=n;i+=2)
    {
   sum=sum+i;
    }
     printf("%d\n",sum);
    return 0;
}

