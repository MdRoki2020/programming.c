//strcat= concatenates (joins) two string

#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[]="hello",str2[]="world";

    strcat(str1,str2);

    printf("%s\n",str1);
     printf("%s",str2);

    getch ();
}
