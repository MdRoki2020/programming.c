#include<stdio.h>
int main ()
{
    int A[100],i,n;
    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
            printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }

    getch ();
}
