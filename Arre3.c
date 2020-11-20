#include <stdio.h>
int main ()
{
int marks[10],sum=0,i,n;
printf("how many numbers :");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&marks[i]);
}

for(i=0;i<n;i++){
    sum=sum+marks[i];
}
    printf("Total Marks: %d\n",sum);
    printf("Average: %.2f\n",(float)sum/n);

    getch ();
}
