#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num1,num2,value;
    cout<<"Enter num1 and num2:";
    cin>>num1>>num2;
    value=pow(num1,num2);

    cout<<"The value of one number raised to the power of another is : "<<value;

    return 0;
}