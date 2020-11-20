#include <stdio.h>
int main ()
{
    int num[100],n,i,sum=0;

    printf("how much number are input you: ");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+num[i];
    }

    printf("total %d\n",sum);
    printf("ave %.2lf\n",(float)sum/n);

    getch ();
}
