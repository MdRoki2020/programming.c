#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter from fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32*9/5);
    printf("%.2f,celsius=%.2f,fahrenheit", celsius,fahrenheit);
    return 0;
}
