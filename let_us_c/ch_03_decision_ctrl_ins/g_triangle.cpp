#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3, sum;
    cout << "Enter Angle1:";
    cin >> a1;
    cout << "Enter Angle2:";
    cin >> a2;
    cout << "Enter Angle3:";
    cin >> a3;
    sum = a1 + a2 + a3;
    if (sum == 180)
    {
        cout << "Triangle is valid.";
    }
    else
    {
        cout << "Triangle is invalid.";
    }

    return 0;
}