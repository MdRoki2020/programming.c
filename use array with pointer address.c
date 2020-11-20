#include <stdio.h>
int main ()
{
    int A[30],i,n;
    printf("How many Array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("A[%d]= ",i);
        scanf("%d",&A[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        printf("A[%d] address:  %x\n",i,&A[i]);
    }




    getch ();
}
