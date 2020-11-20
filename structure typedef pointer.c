#include <stdio.h>
struct xampl {
int x;
};
int main()
{
struct xampl structure;
struct xampl *ptr;
structure.x = 12;
ptr = &structure;                  /* Yes, you need the & when dealing with
                                                    structures and using pointers to them*/

printf( "%d\n", ptr->x );      /* The -> acts somewhat like the * when
                                                   does when it is used with pointers
                                                   It says, get whatever is at that memory
                                                   address Not "get what that memory address

                                                   is"*/

getchar();
}
