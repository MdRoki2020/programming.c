#include <stdio.h>
int main ()
{
    int marks[10],sum=0,i;

    for(i=0;i<=7;i++){
    scanf("%d",marks[i]);
    }

    for(i=0;i<=7;i++){
        sum=sum+marks[i];
    }
     printf("Total : %d",sum);

    getch ();
}
