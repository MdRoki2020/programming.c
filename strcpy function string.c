//strcpy = string copy

#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[]="hello",str2[30];

    strcpy(str2,str1);

    printf("%s",str2);

    getch ();
}
