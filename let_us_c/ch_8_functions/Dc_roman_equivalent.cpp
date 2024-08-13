#include <iostream>
#include <string>

using namespace std;
string intToRoman(int year);

int main()
{
    int year;
    cout << "Enter a year to convert it to Roman numberals: ";
    cin >> year;
    string romanYear = intToRoman(year);
    cout << "The Roman numeral equivalent of the year " << year << " is: " << romanYear << endl;
    return 0;
}

string intToRoman(int year)
{
    string result = "";
    while (year >= 1000)
    {
        result += "M";
        year -= 1000;
    }
    if (year >= 900)
    {
        result += "CM";
        year -= 900;
    }
    if (year >= 500)
    {
        result += "D";
        year -= 500;
    }
    if (year >= 400)
    {
        result += "CD";
        year -= 400;
    }
    if (year >= 100)
    {
        result += "C";
        year -= 100;
    }
    if (year >= 90)
    {
        result += "XC";
        year -= 90;
    }
    if (year >= 50)
    {
        result += "L";
        year -= 50;
    }
    if (year >= 40)
    {
        result += "XL";
        year -= 40;
    }
    while (year >= 10)
    {
        result += "X";
        year -= 10;
    }
    if (year >= 9)
    {
        result += "IX";
        year -= 9;
    }
    if (year >= 5)
    {
        result += "V";
        year -= 5;
    }
    if (year >= 4)
    {
        result += "IV";
        year -= 4;
    }
    while (year >= 1)
    {
        result += "I";
        year -= 1;
    }
    return result;
}