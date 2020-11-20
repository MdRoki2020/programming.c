#include <stdio.h>
int main ()

{
    int num;
    int i;
    int count=0;

    printf("Enter Your Possitive Number: ");
    scanf("%d",&num);

    for(i=2; i<num ; i++)

    {

    if(num%i==0);

    count++;

    break;

    }


    if(count==0)
    printf("This is prime number\n");

    else
        printf("This is not prime number\n");


 getch ();


}
