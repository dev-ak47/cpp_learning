#include <iostream>
using namespace std;

int main(){
    int ch='a' + 'b';
    switch(ch){
        case 'a':
        case 'b':
        cout<<"You entered b\n";
        case 'A':
        cout<<"a as in ashar\n";
        case 'b' + 'a':
        cout<<"You entered a and b\n";
    }
    return 0;
}