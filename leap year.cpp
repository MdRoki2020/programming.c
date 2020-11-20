#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int year;

    cout <<"Enter Your Year: ";
    cin >>year ;

    if(year%4==0 && year%100!=0){
        cout<<"This is leap year";
    }

    else if(year%400==0){
        cout<<"This is leap year";
    }

    else{
        cout<<"This is not leap year";
    }

    getch ();
}
