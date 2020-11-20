#include <stdio.h>
int main ()
{
    int N1,N2,N3;
    printf("please enter no of cars: ");
    scanf("%d",&N1);

    printf("please enter line defining time (s) : ");
    scanf("%d",&N2);

    printf("ending time of the toll process : ");
    scanf("%d",&N3);


    printf("%ds, %ds, %ds",N1,N2,N3);



    getch();
}
