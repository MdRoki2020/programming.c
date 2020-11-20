#include <stdio.h>
int main ()

{
    int Ara[10]={1,2,3,4,5,6,7,8,9,10};
    int i=10;

    for(i=10;i>0;i--){
        printf("%d Element is: %d\n",i+1,Ara[i]);
    }
    getch();
}
