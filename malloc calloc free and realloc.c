#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr1;
    int *ptr2;

    ptr1= (int *) malloc (10 *sizeof (int));
    ptr2= (int *) calloc (10 ,sizeof (int));

    if(ptr1==NULL&&ptr2==NULL){
        printf("not allocated");
    }
    else{
        printf("alocated successfull\n");

        free(ptr1&&ptr2);
        printf("memory freed successfully\n");

        ptr1=realloc(ptr1,50);
        printf("realloc successfully done");
    }


    getch ();

}
