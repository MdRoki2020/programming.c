#include <stdio.h>
int main ()
{
    int A[30],i,n,fact=1;
    printf("How many Arrays: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("A[%d]= ",i);
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++){
        fact=fact*A[i];

           printf("A[%d] factorial: %d\n",i,fact);
    }



    getch ();
}
