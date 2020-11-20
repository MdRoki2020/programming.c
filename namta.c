#include <stdio.h>
int main ()

{
int row,col;
int namta[5][10];

for(row=0;row<5;row++){
for(col=0;col<10;col++){
namta[row][col]=(row+1)*(col+1);
}
}
for(row=0;row<5;row++){
for(col=0;col<10;col++){
printf("%d*%d=%d\n",(row+1),(col+1),namta[row][col]);
}
printf("\n");
}



getch ();
}
