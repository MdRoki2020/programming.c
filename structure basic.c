#include <stdio.h>

struct person{

 char name[30];
 int age;
 float salary;

};



int main ()
{

    struct person person1,person2;

    person1.name[30]="Roki";
    person1.age=20;
    person1.salary=45000.00;

    person2.name[30]="hartlen";
    person2.age=20;
    person2.salary=55000.00;


    printf("Name of person1: %s\n",person1.name);
    printf("Age of person1: %d\n",person1.age);
    printf("Salary of person1: %.f\n",person1.salary);

    printf("\n\n");
    printf("Name of person2: %s\n",person2.name);
    printf("Age of person2: %d\n",person2.age);
    printf("Salary of person2: %.f\n",person2.salary);

    getch ();
}
