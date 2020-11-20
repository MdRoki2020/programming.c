#include <stdio.h>
int main ()
{
    char ch[30];
    printf("please enter string: ");
    scanf("%s",&ch);

    //printf("%s",ch);
    //different system of print..
    puts(ch);

    getch ();
}
