#include <stdio.h>
int main ()
{
    int A[100][100],B[100][100],Multipication[100][100];
    int row1,col1,row2,col2,i,j;

    printf("Enter first matrix row and column : ");
    scanf("%d%d",&row1,&col1);

        printf("Enter second matrix row and column : ");
    scanf("%d%d",&row2,&col2);

    while(col1!=row2){
        printf("Error !!! obviously massing first matrix column and second matrix row are equal\n\n");

            printf("Enter first matrix row and column : ");
    scanf("%d%d",&row1,&col1);

        printf("Enter second matrix row and column : ");
    scanf("%d%d",&row2,&col2);
    }


    for(i=0;i<row1;i++){
            printf("\t");
        for(j=0;j<col1;j++){
                printf("A[%d][%d]= ",i,j);
            scanf("%d= ",&A[i][j]);
        }
        printf("\n");
    }

        for(i=0;i<row2;i++){
                  printf("\t");
        for(j=0;j<col2;j++){
                printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
         printf("\n");
    }

        for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            printf("%d  ",A[i][j]);
        }
         printf("\n");
    }

            for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
             printf("%d  ",A[i][j]);
        }
         printf("\n");
    }


   return 0;
}
