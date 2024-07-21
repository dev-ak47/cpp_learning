#include <iostream>
using namespace std;

int main()
{
    int l, b, area, per;
    cout << "Enter length and breadth of Rectangle:";
    cin >> l >> b;
    area = l * b;
    per = 2 * (l + b);
    if (area > per)
    {
        cout << "Area is greater than Perimeter.";
    }
    else
    {
        cout << "Perimeter is greater than Area.";
    }
    return 0;
}