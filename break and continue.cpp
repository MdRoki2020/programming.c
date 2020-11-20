#include <iostream>
#include <conio.h>
using namespace std;
int main ()

{
    int i=1;

    for(i=1;i<=100;i+=2){
        if(i==10){
            continue;
        }


        cout<<i<<endl;
    }




    getch ();
}
