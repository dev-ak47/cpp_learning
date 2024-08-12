#include <iostream>
using namespace std;

int fact(int n);

int main()
{
    int num;
    cout << "Enter the number to find the factorial : ";
    cin >> num;

    int result = fact(num);
    cout << "The factorial of " << num << " is " << result << endl;
    return 0;
}

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}