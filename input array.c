#include <stdio.h>
int main ()
{
  int A[100][100],B[100][100];
  int i,j,n1,n2,sum;

  printf("How Much Rows of A and B Matrix: ");
  scanf("%d",&n1);
  printf("How Much Column of A and B Matrix: ");
  scanf("%d",&n2);

  //for scan....
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
    //for print....

    printf("\n\nMatrix A: \n");
      for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
            printf("%d ",A[i][j]);
    }
    printf("\n");
  }

  printf("\nMatrix B: \n");
        for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
            printf("%d ",B[i][j]);
    }
    printf("\n");
  }

  printf("\nSum of Matrix A and Matrix B: \n");
  for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        sum=A[i][j]+B[i][j];
        printf("%d ",sum);
    }
    printf("\n");
  }


    getch ();
}
