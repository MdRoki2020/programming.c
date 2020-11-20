#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int row,col;
    int A[4][5];

    cout<<"Enter Eliments With pattern: "<<endl;
    for(row=0;row<4;row++){
        for(col=0;col<5;col++){
            cout<<"A["<<row<<"]["<<col<<"]=";
            cin>>A[row][col];
        }
    }

    for(row=0;row<4;row++){
        for(col=0;col<5;col++){
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }




    getch ();
}
