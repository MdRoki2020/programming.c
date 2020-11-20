#include <stdio.h>

struct person{

int age;
float salary;

};


int main ()
{

    struct person person1,person2;

    person1.age=20;
    person1.salary=45000.00;

    printf("person1\n");
    printf("person1 age= %d\n",person1.age);
    printf("person1 salary= %.2f\n",person1.salary);

    person2.age=22;
    person2.salary=35000.00;

    printf("\n\nperson2\n");
    printf("person2 age= %d\n",person2.age);
    printf("person2 salary= %.2f\n",person2.salary);


    getch ();
}
