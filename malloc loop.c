#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *ptr;
    int i,n;

    printf("Enter Number: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++){

        ptr[i]=i;

    }
    for(i=0;i<n;i++){

        printf("%d\n",ptr[i]);
    }


    getch ();
}
