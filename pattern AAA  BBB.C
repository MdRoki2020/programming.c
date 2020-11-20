/* A A A
   B B B
   C C C
   D D D
*/
#include <stdio.h>
int main ()
{
    char ch='C';
    int i,j;


    for(i=1;i<=4;i++){
        for(j=1;j<=3;j++){
                printf("%c ",i+64);
        }
        printf("\n");
    }

    return 0;
}

