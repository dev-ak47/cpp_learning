#include <iostream>
using namespace std;

int main(){
    int r,c,sum;
    for(r=1;r<=3;r++){
        for(c=1;c<=2;c++){
            sum=r+c;
            cout<<r <<" "<<c<<" "<<sum<<endl;
        }
    }
}