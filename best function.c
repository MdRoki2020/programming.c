#include <stdio.h>
roki(int a,int b){
int sum=a+b;
    printf("Summation of: %d",sum);
}
int main ()
{
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    roki(a,b);
    getch ();
}
