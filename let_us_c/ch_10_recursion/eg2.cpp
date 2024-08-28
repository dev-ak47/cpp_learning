#include <iostream>
int rec(int);
using namespace std;

int main(){
    int a,fact;
    cout<<"Enter any number:";
    cin>>a;

    fact=rec(a);
    cout<<"Factorial Value:"<<fact;
    return 0;
}

int rec(int x){
    int f;
    if(x==1)
    return (1);
    else
    f=x*rec(x-1);
    return(f);
}