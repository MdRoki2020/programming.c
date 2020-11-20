#include <stdio.h>

struct datatype{
char name;
int age;
float cgpa;
};

int main ()
{
    struct datatype person1={"ROKI",20,3.5};

    printf("person1 name %s",person1.name);

    getch ();
}
