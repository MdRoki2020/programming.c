#include <stdio.h>
int main ()
{
    while(1){
    int n,i;
    printf("Enter Number :");
    scanf("%d",&n);

    if(n<20){
        printf("too small\n");
    }
    else{
    for(i=n;i>0;i-=2){
    if(n%2!=0){
    }
        printf("%d-",i);
    }
    }
    }
    getch ();
}
