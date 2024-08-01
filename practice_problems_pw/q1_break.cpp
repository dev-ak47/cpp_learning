#include <iostream>
using namespace std;

int main(){
    int num5;
    for(int i=1;i<=10;i++){
        num5=i*5;
        if(num5%7==0)
        break;
        else continue;
    }
    cout<<num5<<endl;
    return 0;
}