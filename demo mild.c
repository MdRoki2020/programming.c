#include <stdio.h>
int main()
{
    int x=3,y=13996,z=15;
    printf("1.x=%d\n",++x);

    y+=(x+1);
    y++;

    printf("2.x=%d y=%d\n",x,y);
    z=--y;

    printf("3.z=%d\n",z++);


    return 0;

}
