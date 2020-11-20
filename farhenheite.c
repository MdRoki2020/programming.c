#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("enter from celsius: ");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5+32);
    printf("%.2f,celsius = %.2f,fahrenheit",celsius,fahrenheit);
    return 0;
}
