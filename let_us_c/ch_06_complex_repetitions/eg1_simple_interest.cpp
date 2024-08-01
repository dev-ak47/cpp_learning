#include <iostream>
using namespace std;

int main(){
    int p,n,count;
    float r,si;

    for(count=1;count<=3;count++){
        cout<<"Enter values of p,n and r : ";
        cin>>p>>n>>r;
        si=p*n*r/100;
        cout<<"Simple Interest : "<<si<<endl;
    }
    return 0;
}