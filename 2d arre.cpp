#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int A[3][4];
    int row,col;
    cout<<"Enter Number With Matrix: "<<endl;

    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            cout<<"A["<<row<<"]["<<col<<"]=";
            cin>>A[row][col];
        }
    }


    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }




    getch ();
}
