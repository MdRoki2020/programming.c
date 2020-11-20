/// Write a C program to find whether a given year is a leap year or not.

#include <stdio.h>
int main ()
{
    int year;
    printf("Enter Year :");
    scanf("%d",&year);

    if(year%4==0&&year%100!=0){
        printf("Leap Year");
    }
    else if(year%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }

    getch ();
}
