#include <stdio.h>
int main ()
{
    int marks[5],sum=0,i;
    float Average,percentage;
    printf("Enter Marks Of Five Subject: ");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }

    for(i=0;i<5;i++){
        sum=sum+marks[i];
    }
    Average=sum/5;
    percentage=((float)sum/500)*100;
    printf("Total= %d\n",sum);
    printf("Average= %.2f\n",Average);
    printf("percentage= %.2f\n",percentage);

    getch ();
}
