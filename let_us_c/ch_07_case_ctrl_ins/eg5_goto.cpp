#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            for(k=1;k<=3;k++){
                if(i==3 && j==3 && k==3)
                goto out;
                else
                cout<<i<<j<<k;
            }
        }
    }
    out:
    cout<<"Out of the loops at last";
    
    return 0;
}