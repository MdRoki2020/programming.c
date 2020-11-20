#include <stdio.h>
int main ()
{
    char name[30];
    printf("please enter name or others: ");
    gets(name);

    printf("your name: %s\n",name);


    getch ();
}
