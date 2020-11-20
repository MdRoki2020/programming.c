#include <stdio.h>
int main ()
{
int n,i;
printf("Enter an integer number: ");
scanf("%d",&n);

if(n<20){
    printf("Too Small");
}
else{
    for(i=1;i<=n;i=+2){
        printf("%d",i);
    }
}
    getch ();
}
