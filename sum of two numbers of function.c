#include <stdio.h>
peramiter(int a,int b)
{
printf("%d\n",a+b);
}
int main ()
{
    int a,b;
    printf("Enter two integer numbers: ");
    scanf("%d%d",&a,&b);
    peramiter(a,b);


    getch ();
}
