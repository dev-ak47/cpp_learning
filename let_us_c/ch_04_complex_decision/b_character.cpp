#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter character to determine whether it is a capital character,a small case letter,a digit or a special symbol:";
    cin>>c;
    if (c>=65 && c<=90){
        cout<<"Character entered is capital letter.";
    }
    else if(c>=97 && c<=122){
        cout<<"Character is a small case letter.";
    }
    else if(c>=48 && c<=57){
        cout<<"Character is a digit.";
    }
    else if(c>=0 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=127){
        cout<<"Character is a special symbol.";
    }

    return 0;
}