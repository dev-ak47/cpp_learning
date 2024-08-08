#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=4;j>=i;j--){
            if(i==1){
                cout<<"6";
            }
            else if(i==2){
                cout<<"5";
            }
            else if(i==3){
                cout<<"4";
            }
            else
            cout<<"3";
        }
        cout<<endl;
    }
    return 0;
}