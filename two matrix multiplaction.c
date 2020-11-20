#include <stdio.h>
int main ()
{
    int A[100][100],B[100][100],Result[100][100],row1,row2,col1,col2,i,j,k,sum=0;

        printf("Enter First Matrix row and column:  ");
    scanf("%d%d",&row1,&col1);

        printf("Enter Second Matrix row and column:  ");
    scanf("%d%d",&row2,&col2);


    while(col1!=row2){
        printf("Error !! Obviously Massing First Matrix column And Second Matrix Row\n ");
                printf("Enter First Matrix row and column:  ");
    scanf("%d%d",&row1,&col1);

        printf("Enter Second Matrix row and column:  ");
    scanf("%d%d",&row2,&col2);
    }


    //For first matrix taking input
    printf("\nElements Of First Matrix: \n");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
                printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
        //For second matrix taking input
          printf("\nElements Of First Matrix: \n");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
                printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    //multiplying matrix
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            for(k=0;k<col1;k++){
                sum=sum+A[i][k]*B[k][j];
            }
            Result[i][j]=sum;
            sum=0;
        }
    }

    //print for first matrix
    printf("\nFirst Matrix: \n");
        for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

        //print for Second matrix
    printf("\nSecond Matrix: \n");
        for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

            //print for Result matrix
    printf("\nResult Matrix: \n");
        for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            printf("%d ",Result[i][j]);
        }
        printf("\n");
    }



    getch ();
}
