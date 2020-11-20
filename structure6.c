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
struct dob dd;
};

int main ()
{

   struct info student1={"Roki",20,3.5} ;

   student1.dd.day=25;
   student1.dd.month=11;
   student1.dd.year=2002;

   printf("your name: %s\n",student1.name);
   printf("your age: %d\n",student1.age);
   printf("your cgpa: %.2f\n",student1.cgpa);


   printf("your date of birth: %d-%d-%d",student1.dd.day,student1.dd.month,student1.dd.year);




    getch ();
}
