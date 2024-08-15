#include <iostream>
using namespace std;

int main(){
    int i=3;
    cout<<"Address of i = "<<&i<<endl;
    cout<<"Value of i = "<<i<<endl;
    cout<<"Value of i = "<<*(&i)<<endl;
    return 0;
}