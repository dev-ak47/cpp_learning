#include <iostream>
using namespace std;

int main()
{
    int m, n, j;
    cin >> m;
    cin >> n;

    for (int i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == m)
                cout << j;
            else if (j == 1)
                cout << 1;
            else if (j == n)
                cout << n;
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}