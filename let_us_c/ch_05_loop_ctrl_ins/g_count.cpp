#include <iostream>
using namespace std;

int main(){
    int n;
    int posC=0,negC=0,zeroC=0;
    cout<<"Enter number of integers you want to input : ";
    cin>>n;
    for(int i=0;i<n;++i){
        int num;
        cin>>num;
        if(num>0){
            ++posC;
        }else if(num<0){
            ++negC;
        }else{
            ++zeroC;
        }
    }

    cout<<"Count of positive number : "<<posC<<endl;
    cout<<"Count of negative number : "<<negC<<endl;
    cout<<"Count of zero number : "<<zeroC<<endl;
    
    return 0;
}