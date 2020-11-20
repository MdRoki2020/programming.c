/*Write a C Program that will calculate the sum of two Matrix A & B, and
store the resultant matrix into C and finally display the resultant matrix*/

#include <stdio.h>
int main ()
{
    int A[3][3]={ {2,-5,3},{0,7,-2},{-1,4,1} },B[3][3]={ {-3,9,5},{-4,0,1},{6,3,0} };
    int sum[3][3],r,c;

    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            sum[r][c]=A[r][c]+B[r][c];
        }
    }

    printf("sum of matrix : \n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d  ",sum[r][c]);
        }
        printf("\n\n");
    }

    return 0;
}
