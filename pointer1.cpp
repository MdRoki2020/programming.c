#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
 int num1=10,num2=20,sum;
 int *p1,*p2;

 p1=&num1;
 p2=&num2;

 sum=*p1+*p2;

cout<<sum;
    getch();
}
