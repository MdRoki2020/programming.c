#include <stdio.h>
int main ()
{
int n1,n2,sum,sab,mul,rem,ave;

printf("enter first number: ");
scanf("%d",&n1);

printf("enter second number: ");
scanf("%d",&n2);

sum=n1+n2;
sab=n1-n2;
mul=n1*n2;
float div=(float)n1/n2;
rem=n1%n2;
ave=(n1+n2)/2;

printf("summation: %d\n",sum);
printf("sabstraction: %d\n",sab);
printf("multipication: %d\n",mul);
printf("divided: %.2f\n",div);
printf("remainder: %d\n",rem);
printf("average: %d\n",ave);

getch ();
}
