#include <stdio.h>
int main()
{
    int A[100][100],B[100][100],n1,n2,i,j;
        printf("How much rows (A&B metrix): ");
          scanf("%d",&n1);
             printf("How much column (A&B metrix): ");
       scanf("%d",&n2);

    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
                printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("A=  ");
    for(i=0;i<n1;i++){
            printf("\t");
        for(j=0;j<n2;j++){

            printf("%d  ",A[i][j]);
        }
        printf("\n\n");
    }


            printf("How much rows (B metrix): ");
          scanf("%d",&n1);
             printf("How much column (B metrix): ");
       scanf("%d",&n2);

    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
                printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("B=  ");
    for(i=0;i<n1;i++){
            printf("\t");
        for(j=0;j<n2;j++){

            printf("%d  ",B[i][j]);
        }
        printf("\n\n");
    }

    getch ();
}
