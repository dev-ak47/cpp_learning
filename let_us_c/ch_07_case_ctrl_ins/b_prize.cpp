#include <iostream>
using namespace std;

int main(){
    int c=3;
    switch(c){
        case '3':
        cout<<"You never win the silver prize";
        break;
        case 3:
        cout<<"You always lose the gold prize";
        break;
        default:
        cout<<"Ofcourse provided you win the prize";
    }
    return 0;
}