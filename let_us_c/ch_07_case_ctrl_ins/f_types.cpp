#include <iostream>
using namespace std;

int main(){
    int i=1;
    switch(i-2){
        case -1:
        cout<<"Feeding fish\n";
        case 0:
        cout<<"Wedding grass\n";
        case 1:
        cout<<"Mending roof\n";
        default:
        cout<<"Just to survive\n";
    }
    return 0;
}