#include <iostream>
using namespace std;

int main(){
    int s1,s2,s3,angle;
    cout<<"Enter side1,side2,side3:";
    cin>>s1>>s2>>s3;
    if (s1+s2+s3==180){
        if(s1==s2 && s2==s3 && s1==s3){
            cout<<"Triangle is Equilateral.";
        }
        else if(s1==s2 || s2==s3 || s1==s3){
            cout<<"Triangle is isosceles.";
        }
        else if(s1==90 || s2==90 || s3==90){
            cout<<"Triangle is right angled.";
        }
        else{
            cout<<"Triangle is scalene.";
        }

    }
    else{
        cout<<"It is not a triangle.";
    }

    return 0;
}