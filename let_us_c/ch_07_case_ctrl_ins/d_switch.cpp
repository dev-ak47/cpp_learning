#include <iostream>
using namespace std;

int main(){
    int k;
    float j=2.0;
    switch(k=j+1.0){
        case 3:
        cout<<"Trapped";
        break;
        default:
        cout<<"Caught";
    }
    return 0;
}