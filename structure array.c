#include <stdio.h>

struct info{

int age;
float salary;
};

int main ()
{

 struct info student[4];
 int i;

 for(i=0;i<4;i++){
    printf("Information of student %d\n ",i+1);

    printf("Enter Age: ");
    scanf("%d",&student[i].age);

    printf("Enter Salary: ");
    scanf("%f",&student[i].salary);

 }

  for(i=0;i<4;i++){
    printf("\n\nInformation of student: %d\n ",i+1);

    printf("Age:  %d\n ",student[i].age);

    printf("salary:  %.2f\n ",student[i].salary);

 }

    getch ();
}
