#include <iostream>
using namespace std;

int main(){
    int h,ts;
    float cc;
    cout<<"Enter hardness of steel:";
    cin>>h;
    cout<<"Enter carbon content of steel:";
    cin>>cc;
    cout<<"Enter tensile strength of steel:";
    cin>>ts;
    if (h>50 && cc<0.7 && ts>5600){
        cout<<"Grade is 10.";
    }
    else if (h>50 && cc<0.7){
        cout<<"Grade is 9.";
    }
    else if (cc<0.7 && ts>5600){
        cout<<"Grade is 8.";
    }
    else if (h>50 && ts>5600){
        cout<<"Grade is 7.";
    }
    else if (h>50 || cc<0.7 || ts>5600){
        cout<<"Grade is 6.";
    }
    else {
        cout<<"Grade is 5.";
    }
    return 0;
}