///A=1 B=3 C=9 D=9 E=6

#include<stdio.h>
int main()
{
    int D=9,E=6;
    do{
    printf("%d\n",D);
    E--;
    if(E==1){
        break;
    }
}while(E>0);

    getch ();
}
