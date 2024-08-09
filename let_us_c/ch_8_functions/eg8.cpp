#include <iostream>
using namespace std;

int fun()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    if (n >= 10 && n <= 90)
        return (n);
    else
        return (n + 32);
}
int main()
{
    int result = fun();
    cout << "Result : " << result << endl;
    return 0;
}