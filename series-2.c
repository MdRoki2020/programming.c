/**
3+5+7+9+........
input 2    3    4
output 8   15   24

a=3,d=2
*/
#include<stdio.h>
main()
{
    int i,sum=0,n;
    scanf("%d",&n);///3
    for(i=1;i<=n;i++)///i=1; 3<=3;i++
    {
        sum =sum + i*2 + 1;
    }
    printf("%d\n",sum);
}
/**
sum =sum + i*diff +/- extra;
1*2 + 1--->3
                   2*2 + 1--->5
                   3*2 + 1--->7

                   sum   = 0 + 1*2 + 1///sum=3
        sum   = 3 + 2*2 + 1///sum=8
        sum   = 8 + 3*2 + 1///sum=15
*/
