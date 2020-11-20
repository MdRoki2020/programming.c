#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int row,col,n;
    cout<<"Enter Number: ";
    cin>>n;

    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            cout<<" "<<row;
    }
    cout<<endl;
    }


    getch ();
}

