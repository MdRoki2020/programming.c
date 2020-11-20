
#include <stdio.h>
int main ()
int col;
int i,j;
int marks[4][10];
scanf("%d",&marks[i][j]);
for(col=0;col<4;col++){
    marks[3][col]= marks[0][col]/4.0+marks[1][col]+marks[2][col]/2.0;

    printf("roll no: %d total marks:%d\n",col+1,marks[3][col]);
}

getch () ;
}
