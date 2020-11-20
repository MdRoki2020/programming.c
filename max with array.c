#include <stdio.h>
int main ()
{
    int num[100],n,i,max;

    printf("How many number: ");
    scanf("%d",&n);

    printf("please enter %d number: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(i=1;i<n;i++){
        if(max<num[i])

           max=num[i];
    }
        printf("maximum number is %d",max);



    getch();
}
