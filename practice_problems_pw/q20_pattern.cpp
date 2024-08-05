#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // for row
    {
        for (int j = 1; j <= (n - i); j++) // for initial gap
        {
            cout << " ";
        }
        cout << i;
        for (int j = 1; j <= ((2 * (i - 1)) - 1); j++) // for triangle gap in b/w numbers
        {
            if (i == n)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        if (i != 1)
            cout << i;

        cout << endl;
    }

    return 0;
}