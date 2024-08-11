#include <iostream>
using namespace std;

float square(float);

int main()
{
    float a, b;
    cout << "Enter any number : ";
    cin >> a;
    b = square(a);
    cout << "Square of a is b : " << a << " " << b;
    return 0;
}

float square(float x)
{
    float y;
    y = x * x;
    return (y);
}