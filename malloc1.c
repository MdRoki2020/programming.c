#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ptr[100];
    int *ptr;

    ptr= (int*)malloc(100*sizeof (int) );

    free(ptr);

    getch ();
}
