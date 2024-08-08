#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any alphabet a,b or c :";
    cin>>ch;

    switch(ch){
        case 'a':
        case 'A':
        cout<<"a as in ashar";
        break;
        case 'b':
        case 'B':
        cout<<"b as in brain";
        break;
        case 'c':
        case 'C':
        cout<<"c as in cookie";
        default:
        cout<<"Wish you knew what are alphabets";
    }
    return 0;
}