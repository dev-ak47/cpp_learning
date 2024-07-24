#include <iostream>
using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3,m,n;
    cout<<"Enter points x1,y1:";
    cin>>x1>>y1;
    cout<<"Enter points x2,y2:";
    cin>>x2>>y2;
    cout<<"Enter points x3,y3:";
    cin>>x3>>y3;
    m = (y2-y1)/(x2-x1);
    n = (y3-y2)/(x3-x2);

    if (m==n)
    {
        cout<<  "All three points fall on one straight line.";
    }
    else {
        cout<<"All three points does not fall on one  straight line." << endl;
    }
    
    return 0;
}