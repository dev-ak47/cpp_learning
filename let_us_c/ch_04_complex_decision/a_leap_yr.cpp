#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year to find its leap or not:";
    cin >> year;
    if ((year % 4 == 0 && year % 100 !=0)||(year%400==0))
    {
        cout << "Its leap year.";
    }
    else
    {
        cout << "Its not a leap year.";
    }
    return 0;
}