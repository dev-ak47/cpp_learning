#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;
    cout << "Enter angle1, angle2, angle3 : ";
    cin >> a1 >> a2 >> a3;
    if (a1 + a2 + a3 == 180)
    {
        if (a1 == a2 && a2 == a3 && a1 == a3)
        {
            cout << "Its an equilateral triangle.";
        }
        else if (a1 == a2 || a2 == a3 || a1 == a3)
        {
            cout << "Its an isosceles triangle.";
        }
        else
        {
            cout << "Its a scalene triangle.";
        }
    }
    else
    {
        cout << "Its not a triangle.";
    }
    return 0;
}