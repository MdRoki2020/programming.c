#include <stdio.h>
int main ()
{
    int n,y,z,a,b,c,d,e,f,g,h;

    printf("Enter Number :");
    scanf("%d",&n);

   a= n++;
    b=--n;
    c=y=n+=2;
    d=n--;
    e=n--;
    f=z=n-=2;
    g=++n;                                                               ///n=8  y=12 z=6
    h=n-=2;

  printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f,g,h);


    getch ();
}
