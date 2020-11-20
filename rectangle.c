#include <stdio.h>
int area(int length, int width)
{
    int temp;
    temp = length*width;
    return temp;
}
int main()
{
    int x, y, z;
    printf("please enter length and width: ");
    scanf("%d %d", &x, &y);
    z = area(x,y);
    printf(" rectangle: %d", z);
}
