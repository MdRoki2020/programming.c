#include <stdio.h>
int main ()
{
    int A[100][100],B[100][100],sum[100][100],i,j,n1,n2;

    printf("please enter row A and B: ");
    scanf("%d",&n1);

    printf("please enter column A and B: ");
    scanf("%d",&n2);

    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("A= \n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");

    }
    printf("\n\nB= \n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("\n\nsum of two matrix \n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
           sum[i][j]=A[i][j]+B[i][j];
           printf("%d ",sum[i][j]);
        }
        printf("\n");
    }







    getch ();
}
