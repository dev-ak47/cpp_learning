#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 25)
    {
        cout << "F";
    }
    else if (n >= 25 && n <= 44)
    {
        cout << "E";
    }
    else if (n >= 45 && n <= 49)
    {
        cout << "D";
    }
    else if (n >= 50 && n <= 59)
    {
        cout << "C";
    }
    else if (n >= 60 && n <= 79)
    {
        cout << "B";
    }
    else if (n >= 80 && n <= 100)
    {
        cout << "A";
    }
    else
    {
        cout << "No Output";
    }
}