#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[5];
    int i;

    for(i=0;i<5;i++){
            printf("element-%d: ",i);
    scanf("%d",&arr[i]);
    }

    printf("\n\n");
    for(i=0;i<5;i++){
        printf("element-%d: %d\n",i,arr[i]);
    }

    getch ();
}
