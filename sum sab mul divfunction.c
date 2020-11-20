#include <stdio.h>
int summation(int a,int b)
{
    int sum=(a+b);
    printf("Summation: %d\n",sum);
}

int sabtraction(int a,int b)
{
    int sab=(a-b);
    printf("sabtraction: %d\n",sab);
}

int multiplaction(int a,int b)
{
    int mul=(a*b);
    printf("multiplaction: %d\n",mul);
}

int divition(int a,int b)
{
    float div=(a/b);
    printf("divition: %.2f\n",div);
}
int main ()
{
    int a,b;
    printf("please enter a and b value: ");
    scanf("%d %d",&a,&b);
    summation(a,b);
    sabtraction(a,b);
    multiplaction(a,b);
    divition(a,b);
    getch ();
}
