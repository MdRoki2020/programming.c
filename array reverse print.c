#include <stdio.h>
int main ()
{
    int ar[4]={1,2,3,4};
    int i;
       printf("Normal print: \n");
    for(i=0;i<4;i++){

        printf("%d  ",ar[i]);
    }
    printf("\n");
               printf("Reverse print: \n");
    for(i=4;i>0;i--){

        printf("%d  ",ar[i]);
    }
    getch();
}
