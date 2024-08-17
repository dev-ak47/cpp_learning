#include <iostream>
using namespace std;

void swapr(int *, int *);

int main()
{
    int a = 10, b = 20;
    swapr(&a, &b);
    cout << a << endl
         << b << endl;
    return 0;
}

void swapr(int *x, int *y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;
}