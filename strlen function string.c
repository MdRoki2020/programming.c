//strlen= count string length

#include <stdio.h>
#include <string.h>
int main ()
{
    char ch[30];

    printf("please enter string: ");
    gets(ch);

     int length=strlen(ch);

     printf("%d",length);

    getch();

}
