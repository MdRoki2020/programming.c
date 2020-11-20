#include<stdio.h>

int width;

int height;

int area;

int perimeter;

int main ()

{
    width= 5;
    height= 7;

    perimeter = 2*(height+width);
    printf( "perimeter of the rectangle = %d,inches\n",perimeter);

    area = (height*width);
    printf("area of the rectangle = %d,square inches\n",area);
    return 0;
}
