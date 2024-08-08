#include <iostream>
using namespace std;

int main(){
    char suite = 3;
    switch(suite){
        case 1:
        cout<<"Diamond";
        case 2:
        cout<<"Spade";
        default:
        cout<<"Heart";
    }
    cout<<"I thought one wears a suite";
    
    return 0;
}