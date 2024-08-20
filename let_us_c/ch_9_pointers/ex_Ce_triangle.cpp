#include <iostream>
#include <math.h>
using namespace std;

bool isTriangleValid(double a, double b, double c)
{
    return (a + b > c) && (b + c > a) && (a + c > b);
}

double area(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    double number = (s) * (s - a) * (s - b) * (s - c);

    if (number < 0)
    {
        return -1.0; // Return -1 to indicate an invalid scenario for area
    }
    double t_area = sqrt(number);
    return t_area;
}

int main()
{
    int a, b, c;
    cout << "Enter the value of 3 sides:";
    cin >> a >> b >> c;

    if (!isTriangleValid(a, b, c))
    {
        cout << "The given sides do not form a valid triangle." << endl;
        return 1; // There is some error
    }

    double result = area(a, b, c);

    if (result < 0)
    {
        cout << "Error : Calculation resulted in a negative value inside sqrt()." << endl;
    }
    else
    {
        cout << "The area of triangle is: " << result << endl;
    }
    return 0;
}