/* 1 1 1 1
   0 0 0 0
   1 1 1 1
*/
#include <stdio.h>
int main ()
{
    int i,j;


    for(i=1;i<=3;i++){
        for(j=1;j<=4;j++){
                printf("%d ",i%2);
        }
        printf("\n");
    }

    return 0;
}
