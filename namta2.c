#include <stdio.h>
int main ()
{
    int i,n;

    printf("please enter number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%dX%d= %d\n",n,i,n*i);
    }


    getch ();
}
