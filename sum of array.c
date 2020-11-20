#include <stdio.h>
int main ()
{
    int A[30],i,n,sum=0;
    float ave,per;
    printf("How many subject: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("A[%d]= ",i);
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+A[i];
        ave=sum/n;
        per=((float)sum/500)*100;
    }

    printf("sum of all input: %d\n",sum);
    printf("average of all input: %.2f\n",ave);
    printf("percentage of all input: %.2f\n",per);


    getch ();
}

