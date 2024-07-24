#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the coordinates of the point(x,y):";
    cin>>x>>y;

    if (y=0){
        cout<<"Point lies on x axis.";
    }
    else if (x=0){
        cout<<"Point lies on y axis.";
    }
    else if(x==0 && y==0){
        cout<<"Point lies in the origin.";
    }
    else {
        cout<<"Point lies in between both the axis.";
    }

    return 0;
}