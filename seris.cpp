   //seris 1+3+5+7......n

#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
    int sum,i,n;
    sum=0;
    i=1;

    cout<<"Enter Last Number: ";
    cin>>n;
    cout<<"1+3+5+7.....+"<<n<<endl;

    for(i=1;i<=n;i+=2){
        sum=sum+i;
    }
        cout<<"value"<<"="<<sum<<endl;


    getch ();
}
