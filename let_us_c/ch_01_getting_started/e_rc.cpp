#include <iostream>
using namespace std;

int main()
{
    int l, b, a_rec, p_rec;
    float r, a_cir, circum;
    cout << "Enter length and breadth of rectangle:";
    cin >> l >> b;
    cout << "Enter radius of circle:";
    cin >> r;
    a_rec = l * b;
    p_rec = 2 * (l + b);
    a_cir = 3.14 * r * r;
    circum = 2 * 3.14 * r;
    cout << "Area and Perimeter of rectangle is:" << a_rec << '\n'
         << p_rec << endl;
    cout << "Area and circumference of the circle:" << a_cir << '\n'
         << circum << endl;

    return 0;
}