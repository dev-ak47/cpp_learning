#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i); j >= 0; j--)
        {
            cout << " ";
        }
        for (int y = 1; y <= i * 2 - 1; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}