#include <stdio.h>

struct dob
{
    int day;
    int month;
    int year;
};
struct info
{
    char name[30];
    int age;
    float cgpa;
    struct dob dmy;

};

int main ()
{
    struct info student1={"Roki",20,3.5};


    /*strcpy(student1.name,"Roki");
    student1.age=20;
    student1.cgpa=3.5;*/

    student1.dmy.day=20;
    student1.dmy.month=7;
    student1.dmy.year=2000;


    printf("Your name: %s\n",student1.name);
    printf("Your age: %d\n",student1.age);
    printf("Your cgpa: %.2f\n",student1.cgpa);
    printf("Your date of birth: %d-%d-%d",student1.dmy.day,student1.dmy.month,student1.dmy.year);

    getch ();
}
