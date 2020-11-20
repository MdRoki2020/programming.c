#include <stdio.h>
int main ()

{
    float height,base,area;

printf("Enter base: ");
scanf("%f",&base);

printf("Enter height: ");
scanf("%f",&height);

area= 0.5*base*height ;

printf("area= %.2f\n",area);

getch ();
}
