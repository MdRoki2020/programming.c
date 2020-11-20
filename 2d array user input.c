#include<stdio.h>
int main ()
{
    int i,j,n1,n2;
    int A[100][100];

    printf("How Much rows: ");
    scanf("%d",&n1);
        printf("How Much column: ");
    scanf("%d",&n2);

    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    getch ();
}
