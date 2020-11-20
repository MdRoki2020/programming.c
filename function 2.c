#include <stdio.h>
roki()
{
    printf("I am already in second semester\n");
    diu();
    printf("I am already in second semester\n");
}
diu()
{
    printf("Daffodil International University is privet university of Bangladesh\n");
}
int main ()
{
    roki();
    printf("I am study at Daffodil international university\n");
    diu();
    roki();

    getch ();
}

