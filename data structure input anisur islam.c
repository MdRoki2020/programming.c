#include <stdio.h>

struct person{

int age;
float salary;

};


int main ()
{

    struct person person1,person2;

    printf("Enter person1 Age: ");
    scanf("%d",&person1.age);

    printf("Enter person1 salary: ");
    scanf("%f",&person1.salary);

    printf("person1 information: \n");
    printf("person1 age= %d\n",person1.age);
    printf("person1 salary= %.2f\n",person1.salary);


    printf("\nEnter person2 Age: ");
    scanf("%d",&person2.age);

    printf("Enter person2 salary: ");
    scanf("%f",&person2.salary);

    printf("person2 information: \n");
    printf("person1 age= %d\n",person1.age);
    printf("person1 salary= %.2f\n",person1.salary);

    getch ();
}
