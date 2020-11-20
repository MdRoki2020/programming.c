#include <stdio.h>
addition(int a,int b){
return a+b;
}

subtraction(int a,int b){
return a-b;
}

Multiplication(int a,int b){
return a*b;
}

division(int a,int b){
return a/b;
}



int main ()
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);

    printf("Enter Second Number: ");
    scanf("%d",&b);


    printf("addition of two numbers %d\n",addition(a,b));
    printf("subtraction of two numbers %d\n",subtraction(a,b));
        printf("Multiplication of two numbers %d\n",Multiplication(a,b));
            printf("division of two numbers %d\n",division(a,b));
}

