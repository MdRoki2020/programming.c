#include <stdio.h>

struct datatype{
   char name[30];
   int age;
   float CGPA;
};
void main ()
{

 struct datatype student1,student2;

 //strcpy(student1.name,"Roki");
 //student1.age=20;
 //student1.CGPA=3.8;
 printf("Please Enter Student1 Name: ");
 gets(student2.name);

 printf("Please Enter Student1 Age: ");
 scanf("%d",&student2.age);

 printf("Please Enter Student1 CGPA: ");
 scanf("%f",&student2.CGPA);


 /*printf("Student1 Name:  %s\n",student1.name);
 printf("Student1 Age:  %d\n",student1.age);
 printf("Student1 CGPA:  %.2f\n",student1.CGPA);

 printf("\n\n");*/

 printf("Student2 Name:  %s\n",student2.name);
 printf("Student2 Age:  %d\n",student2.age);
 printf("Student2 CGPA:  %.2f\n",student2.CGPA);

}
