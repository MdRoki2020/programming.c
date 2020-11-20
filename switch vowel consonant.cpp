#include <iostream>
#include <conio.h>
using namespace std;
int main ()

{

    char ch;
    cout<<"Enter Your Letter: ";
    cin>>ch;
    ch=tolower(ch);

    switch(ch){

    case 'a':
    cout<<"This is Vowel";
    break;

    case 'e':
    cout<<"This Is Vowel";
    break;

    case 'i':
    cout<<"This is Vowel";
    break;

    case 'o':
    cout<<"This Is Vowel";
    break;

    case 'u':
    cout<<"This Is Vowel";
    break;

    default:
        cout<<"This Is Consonant";
    break;

    }

    getch ();
}
