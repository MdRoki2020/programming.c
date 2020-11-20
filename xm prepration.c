#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter Number :");
    scanf("%d",&n);

    if(n<20){
        printf("Too Small\n");
    }
    else{
        if(n>20){
            for(i=n;i>=1;i-=2){
                printf("%d\n",i);
            }
        }
    }

    getch ();
}
