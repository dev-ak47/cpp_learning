#include <iostream>
using namespace std;

float circle(int);

int main()
{
    float area;
    int radius = 1;
    area = circle(radius);
    cout << area;
    return 0;
}

float circle(int r)
{
    float a;
    a = 3.14 * r * r;
    return (a);
}