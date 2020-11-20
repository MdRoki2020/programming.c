#include<stdio.h>
main()
{
    int i,n;
    scanf("%d",&n);
    i=1;
    do
    {
        printf("%d\n",i);

        i++;
    }
    while( i<=n );
}
/**
structure of do while loop:
    initialization;
    while(condition)
    {
        statement;

        iteration;
    }

*/
