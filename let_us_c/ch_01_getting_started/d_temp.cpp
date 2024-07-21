#include <iostream>
using namespace std;

int main()
{
    int fah, cent;
    cout << "Enter the temperature in fahrenheit:";
    cin >> fah;
    cent = (fah - 32) / 1.8;
    cout << "Temperature in centigrade is:" << cent;
    return 0;
}