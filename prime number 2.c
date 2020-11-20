#include <stdio.h>
int main ()

{
    int num;
    int i;
    int count;

    printf("Enter your possitive Number: ");
    scanf("%d",&num);


        for(i=0; i<num; i++)

        {
        if(num%i==0);
        count++;
        break;
    }

    if(count==0)
    printf("This is prime number\n");

    else
        printf("This is not prime\n");

    getch ();
}
