#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main ()
{
    int random_number,i;
    for(i=0;i<=5;i++){
        random_number=rand()%5+1;
        cout<<"random number of="<<random_number<<endl;
    }


    getch ();
}
