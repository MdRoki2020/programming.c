#include <stdio.h>
int main()
{
    int n,i;

    scanf("%d",&n);

    if(n<20){
        printf("Too small\n");
    }
    else{
        printf("1");
        for(i=3;i<=n;i++){
            if(i%2!=0){
                printf("-%d",i);
            }
        }
    }



    return 0;
}
