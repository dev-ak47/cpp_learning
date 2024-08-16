#include <iostream>
using namespace std;

void swapv(int x, int y);

int main()
{
    int a = 10, b = 20;
    swapv(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
void swapv(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    cout << x << endl
         << y << endl;
}