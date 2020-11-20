#include <stdio.h>
#include <stdlib.h>

int max(int a,int b )
{
    if(a>b){
        printf("the max number is: %d",a);
    }
    else{
        printf("the max number is %d",b);
    }
}
int main()
{
    int a,b;
    printf("Please Enter two numbers: ");
    scanf("%d %d",&a,&b);
    max(a,b);


    return 0;
}
