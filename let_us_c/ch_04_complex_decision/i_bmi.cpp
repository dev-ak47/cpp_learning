#include <iostream>
using namespace std;

int main(){
    float bmi,wgt,hgt;
    cout<<"Enter weight (in kilograms) :";
    cin>>wgt;
    cout<<"Enter height (in meters) :";
    cin>>hgt;
    bmi=wgt/(hgt*hgt);
    if (bmi<15){
        cout<<"Starvation";
    }
    else if(bmi>=15.1 && bmi<=17.5){
        cout<<"Anorexic";
    }
    else if(bmi>=17.6 && bmi<=18.5){
        cout<<"Underweight";
    }
    else if(bmi>=18.6 && bmi<=24.9){
        cout<<"Ideal";
    }
    else if(bmi>=25 && bmi<=25.9){
        cout<<"Overweight";
    }
    else if(bmi>=30 && bmi<=30.9){
        cout<<"Obese";
    }
    else if(bmi>=40){
        cout<<"Morbility Obese";
    }

    return 0;
}