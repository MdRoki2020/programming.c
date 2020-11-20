///when we want print 4 rows and 3 cols
#include <stdio.h>
int main ()
{
    int i,j;

    for(i=1;i<=4;i++){
        for(j=1;j<=3;j++){
            printf("* ");
        }
        printf("\n");
    }

    getch ();
}
