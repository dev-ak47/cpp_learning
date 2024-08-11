#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a = 0.5;
    float w, x, y, z;

    w = sin(a);
    x = cos(a);
    y = tan(a);
    z = pow(a, 2);
    cout << w << endl
         << x << endl
         << y << endl
         << z;
}