#include <stdio.h>

struct dob
{
    int date;
    int month;
    int year;


};

struct info
{
    char name[30];
    int age;
    float cgpa;
    struct dob variable;

};


void main ()
{

    struct info student1;

    strcpy(student1.name,"ROKI");
    student1.age=20;
    student1.cgpa=3.5;
    student1.variable.date=20;
    student1.variable.month=6;
    student1.variable.year=2000;

    printf("%s\n",student1.name);
    printf("%d\n",student1.age);
    printf("%.2f\n",student1.cgpa);
    printf("%d-%d-%d",student1.variable.date,student1.variable.month,student1.variable.year);




    getch ();
}
