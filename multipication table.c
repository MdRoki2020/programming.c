#include <stdio.h>
int main ()
{
    while(1){
    int i,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){

    for(i=1;i<=10;i++){

        printf("%dX%d=%d\n",n,i,n*i);
    }
    }
    }
    return 0;
}
