///2*5+4*10+.....n  ///sum=sum+i*2+0  ///sum=sum+i*5+0  ///sum=sum+(i*2+0)*(i*5+0)
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int i,sum=0,n;
cout<<"Enter Number n:";
cin>>n;

for(i=1;i<=n;i++){
    sum=sum+(i*2+0)*(i*5+0);
}
cout<<"2*5+4*10+.....(n="<<n<<")=" <<sum;

    getch ();
}
