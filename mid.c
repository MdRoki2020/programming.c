///A=1 B=3 C=9 D=9 E=6

#include <stdio.h>
int main()
{
    int A=1,B=3,C=9,D=9;
    if(++A<B++){
        printf("%d\n",B+C+D);
    }
    else{
        printf("%d\n",A);
    }


    getch ();
}
