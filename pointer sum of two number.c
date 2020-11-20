#include <stdio.h>
int main()
{

    int fnum,snum,*ptr,*qtr,sum;

     printf("please enter first number: ");
     scanf("%d",&fnum);

     printf("please enter second number: ");
     scanf("%d",&snum);

     ptr=&fnum;
     qtr=&snum;
     sum=(*ptr+*qtr);

     printf("sum of two number: %d",sum);

    return 0;
}
