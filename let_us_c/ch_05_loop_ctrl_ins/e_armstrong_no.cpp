#include <iostream>
using namespace std;

int main(){
    int n,r,sum=0,temp;
    cout<<"Enter digits to find it is armstrong or not :";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        cout<<"It is an armstrong number.";
    }
    else{
        cout<<"Not an armstrong number.";
    }

    return 0;
}