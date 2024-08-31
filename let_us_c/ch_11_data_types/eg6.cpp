#include <iostream>
using namespace std;

int main(){
    int i=1;
    {
        int i=2;
        {
            int i=3;
            cout<<i;
        }
        cout<<i;
    }
    cout<<i;
    return 0;
}