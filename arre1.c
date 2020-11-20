#include <stdio.h>
int main()
{
    int x[5];
    int sum;
    int i;
    {
    printf("Enter five number: ");
    for(i=0; i<5; i++);
    scanf("%d", &x[i]);
    }

     for(i=0;i<5;i++);
     sum= sum+x[i];

     printf("The sum : %d\n",sum);

     printf("The avarase :%0.2f\n",(float) sum/5);


     return 0;
}
