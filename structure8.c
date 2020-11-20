#include <stdio.h>

struct info{
int age;
float salary;

};

int main ()
{
    struct info person1;

    printf("Please Enter Person1 Age: ");
    scanf("%d",&person1.age);

    printf("Please Enter Person1 Salary: ");
    scanf("%f",&person1.salary);

    printf("Age Of Person1: %d\n ",person1.age);
    printf("Salary Of Person1: %.2f\n ",person1.salary);


    getch ();
}
