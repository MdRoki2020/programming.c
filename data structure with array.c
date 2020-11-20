#include <stdio.h>

struct student{

char name[30];
int age;
float cgpa;
};

int main ()
{
    struct student info[4];
    int i;

    for(i=0;i<4;i++){
        printf("\nInformation for student  %d\n",i+1);

        printf("please enter Name:" );
        scanf("%s",&info[i].name);

        printf("please enter AGE:" );
        scanf("%d",&info[i].age);

        printf("please enter CGPA:" );
        scanf("%f",&info[i].cgpa);

    }

    for(i=0;i<4;i++){
            printf("\n\n");
        printf("Information for student %d\n",i+1);

        printf(" Name: %s\n",info[i].name);

        printf(" Age: %d\n",info[i].age);

        printf("Cgpa: %.2f\n",info[i].cgpa);

    }


    getch ();
}
