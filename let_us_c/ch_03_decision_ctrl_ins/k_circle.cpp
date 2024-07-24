#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float cx,cy,r,x,y,dis;
    cout<<"Enter centre of circle cx and cy:";
    cin>>cx>>cy;
    cout<<"Enter the radius of circle:";
    cin>>r;
    cout<<"Enter the position x,y to check its position:";
    cin>>x>>y;
    dis = sqrt(pow((x-cx),2) + pow((y-cy),2));
    if (dis<r){
        cout<<"Point lies inside the circle.";
    }
    else if (dis>r){
        cout<<"Point lies outside the circle.";
    }
    else {
        cout<<"Point lies at the circle.";
    }

    return 0;
}