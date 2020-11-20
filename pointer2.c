#include <stdio.h>
int main ()
{

  int a=5;

  int *p=&a;

  int **pp=&p;

  printf("address: %x\n",p);
  printf("address: %d\n",*p);
  printf("address: %x\n",pp);
  printf("address: %x\n",**pp);

    getch ();
}
