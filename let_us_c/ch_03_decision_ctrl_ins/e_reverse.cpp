#include <iostream>
using namespace std;

int main()
{
    int n, reverse;
    cout << "Enter a number to reverse it:";
    cin >> n;
    while (n > 0)
    {
        reverse = n % 10;
        cout << reverse;
        n = n / 10;
    }
    if (reverse == n)
    {
        cout << '\n'
             << "The original and the reversed number is same.";
    }
    else
    {
        cout << '\n'
             << "The original and the reversed number is different.";
    }
    return 0;
}