
#include<stdio.h>

int main()
{
    float fahrenheit, celsius;

    //get the limit of fibonacci series
    printf("Enter Fahrenheit: \n");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32)*5/9;

    printf("Celsius: %f \n", celsius);

    return 0;
}
