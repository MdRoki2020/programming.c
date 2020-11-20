#include <stdio.h>
int area(int length, int width){
return (length*width);
}

int main ()
{
    int length,width;
    printf("Please Enter length: ");
    scanf("%d",&length);

        printf("Please Enter width: ");
    scanf("%d",&width);


    printf("Rectangle %d",area(length,width));

}
