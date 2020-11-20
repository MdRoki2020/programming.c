#include <stdio.h>

int summation(int n1,int n2){
int sum=(n1+n2);
printf("Summation of two numbers: %d\n",sum);
}

int divided(float n1,float n2){
float div=(n1/n2);
printf("divided of two numbers: %.2f\n",div);
}


int main ()
{
    int n1,n2;
   printf("Enter First Number: ");
   scanf("%d",&n1);

   printf("Enter second Number: ");
   scanf("%d",&n2);

   summation(n1,n2);
   divided(n1,n2);


    getch ();
}
