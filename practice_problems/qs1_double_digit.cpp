#include <iostream>
using namespace std;

// practice problems from https://amitabhsirkiclasses.org.in/materials/test/jlogical.htm

int main()
{
    int num;
    cin >> num;
    if (num >= 10 && num <= 99)
    {
        if (num % 11 == 0)
        {
            cout << "Digits are same.";
        }
        else
        {
            cout << "Digits are not same.";
        }
    }
    else
    {
        cout << "Invalid Number";
    }
    return 0;
}