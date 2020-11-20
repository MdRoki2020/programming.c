#include <stdio.h>

struct info{
char name[30];
int age;
float cgpa;

};

int main ()
{

         struct info student[4];
         int i,n;

        printf("How many students:  ");
        scanf("%d",&n);

        //take input
        for(i=0;i<n;i++){
        printf("\ninformation for student %d\n",i+1);

        printf("Please Enter student Name: ");
        scanf("%s",&student[i].name);

        printf("Please Enter student Age: ");
        scanf("%d",&student[i].age);

        printf("Please Enter student Cgpa: ");
        scanf("%f",&student[i].cgpa);
    }

       //for print
        for(i=0;i<n;i++){
        printf("\n\ninformation for student %d\n",i+1);

        printf("Please Enter student Name: %s\n",student[i].name);

        printf("Please Enter student Age: %d\n",student[i].age);

        printf("Please Enter student Cgpa: %.2f\n",student[i].cgpa);
    }




    getch ();
}
