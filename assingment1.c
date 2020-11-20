#include <stdio.h>
int main()
{
    int r, c, A[3][3]={ {2,-5,3},{0,7,-2},{-1,4,1} },B[3][3]={ {-3,9,5},{-4,0,1},{6,3,0} },i, j,sum[3][3];


    // adding two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = A[i][j] + B[i][j];
        }

    // printing the result
    printf("\nSum of two matrices: \n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("%d   ", sum[i][j]);
            }
            printf("/n");


    return 0;
}
