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
    struct info student1={"roki",20,3.5};
    struct dob dmy={7,4,2020};


    printf("name %s\n",student1.name);
    printf("age %d\n",student1.age);
    printf("cgpa %.2f\n",student1.cgpa);
    printf("date of birth: %d-%d-%d",student1.dmy.day,student1.dmy.month,student1.dmy.year);

    getch ();
}
