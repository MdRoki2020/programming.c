/// Write a C program to find the largest of three numbers.

#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter Three Number :");\
    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&a>c){
        printf("%d is larger than three Number",a);
    }
    else if(b>a&&b>c){
        printf("%d is large than three Number",b);
    }

    else{
        printf("%d is large than three Number",c);
    }

    getch ();

}
