#include <stdio.h>
int main ()

{
    int temp;
    int num1=5,num2=10;

    temp=num1;
    num1=num2;
    num2=temp;

    printf("num1=%d\n",num1);
    printf("num2=%d\n",num2);

    return 0;

}
