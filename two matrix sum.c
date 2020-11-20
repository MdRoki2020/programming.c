#include <stdio.h>

int main()
{
	int A[3][3]={ {2,-5,3},{0,7,-2},{-1,4,1} },B[3][3]={ {-3,9,5},{-4,0,1},{6,3,0} },sum[3][3],i,j;


	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("sum of MATRIX \n");
	for(i=0;i<3;i++)
        {
		for(j=0;j<3;j++){
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}
