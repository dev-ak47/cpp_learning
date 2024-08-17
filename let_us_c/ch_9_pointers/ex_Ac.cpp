#include <iostream>
using namespace std;

int main()
{
    float a = 13.5;
    float *b, *c;
    b = &a;
    c = b;
    cout << &a << " " << b << " " << c << endl;
    cout << a << " " << *(&a) << " " << *&a << " " << *b << " " << *c << endl;
}