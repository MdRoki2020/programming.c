#include <stdio.h>
struct dob{
    int day;
    int month;
    int year;
};
struct info{
 char name[30];
 int age;
 float cgpa;
 struct dob dmy;
};

int main ()
{
   struct info student1={"roki",20,3.5};
   student1.dmy.day=7;
   student1.dmy.month=4;
   student1.dmy.year=2000;


   printf("your name: %s\n",student1.name);
   printf("your age: %d\n",student1.age);
   printf("your cgpa: %.2f\n",student1.cgpa);
   printf("your date of birth: %d-%d-%d",student1.dmy.day,student1.dmy.month,student1.dmy.year);


    getch ();
}
