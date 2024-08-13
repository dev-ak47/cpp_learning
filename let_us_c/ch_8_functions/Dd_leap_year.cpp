#include <iostream>
using namespace std;

int leap(int yr);

int main()
{
    int year;
    cout << "Enter year to find its leap or not:";
    cin >> year;
    int result = leap(year);
    return 0;
}

int leap(int yr)
{
    if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
    {
        cout << "Its leap year.\n";
    }
    else
    {
        cout << "Its not a leap year.\n";
    }
    return yr;
}