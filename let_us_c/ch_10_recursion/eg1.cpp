#include <iostream>
using namespace std;
int factorial(int);

int main(){
    int a,fact;
    cout<<"Enter any number: ";
    cin>>a;

    fact=factorial(a);
    cout<<"Factorial Value:"<<fact;
    return 0;
}

int factorial(int x){
    int f=1,i;
    for(i=x;i>=1;i--)
    f=f*i;
    return(f);
}