#include<stdio.h>
int main()
{
int number,i;
scanf("%d",&number);
if(number<20)
{
    printf("Too Small\n");
}
else if(number>20)
{
    for(i=1;i>number;i=2)
 {
    if(i%2==0)
        printf("%d-",i);
 }
}
return 0;
}

