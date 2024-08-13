#include <iostream>
#include <math.h>
using namespace std;

int power(int n1, int n2);

int main()
{
    int num1, num2;
    cout << "Enter the value of a to raise it by b : ";
    cin >> num1 >> num2;
    int result = power(num1, num2);
    cout << "The result of " << num1 << "^" << num2 << " is: " << result << endl;
    return 0;
}

int power(int n1, int n2)
{
    int value = pow(n1, n2);
    return value;
}
