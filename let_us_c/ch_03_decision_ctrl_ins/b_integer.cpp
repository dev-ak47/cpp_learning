#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter an integer:";
    cin >> i;
    if (i % 2 == 0)
    {
        cout << "It is an even number.";
    }
    else
    {
        cout << "It is an odd number.";
    }
    return 0;
}