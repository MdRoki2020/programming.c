#include <stdio.h>
int main ()
{
    int A[100][100], B[100][100], C[100][100];
    int i,j,n;

    printf("How many row and column use here: ");
    scanf("%d",&n);
    printf("\n");


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter value A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter value B[%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //display A Matrix
    printf("A matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //display B Matrix
    printf("\n");
    printf("B matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    //sum of two matrix
    printf("\n");
    printf("sum of two matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }





    getch ();
}
