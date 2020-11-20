#include <stdio.h>
roki(int a,int b){
int sum=(a+b);
printf("Enter sum: %d",sum);
}
int main ()
{
    int a,b;
    printf("Enter two Number: ");
    scanf("%d%d",&a,&b);
    roki(a,b);
    getch ();
}
