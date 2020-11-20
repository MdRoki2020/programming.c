#include <stdio.h>
int main ()
{
    int i,count=0,n;

    printf("please enter an integer Number: ");
    scanf("%d",&n);

    for(i=2;i<n;i++){

        if(n%i==0){
            count++;
        }
    }

    if(count==0){
        printf("it's prime Number");
    }

    else{

        printf("it's Not prime Number");
    }





    getch ();
}
