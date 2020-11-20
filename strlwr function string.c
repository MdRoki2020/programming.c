//strlwr= make all charecter lower case

#include <stdio.h>
#include <string.h>
int main ()
{
    char ch[30];

    printf("please enter string: ");
    gets(ch);

     strlwr(ch);

     printf("%s",ch);

    getch();

}

