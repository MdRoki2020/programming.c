#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main ()
{
    while(1){
    int random_number,gussing_number;

    cout<<"Enter Number Between 1 to 5 :";
    cin>>random_number;

    random_number=rand()%5+1;

    if(random_number==gussing_number){
        cout<<"You Have Won"<<endl<<endl;
    }
    else{
        cout<<"You Have Lost. Try Again later "<<endl;
        cout<<"Random Number Was :"<<random_number<<endl<<endl;
    }


    }
    getch ();
}
