#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 1;
    while (i++ <= 100)
    {
        while (j++ <= 200)
        {
            if (j == 150)
                break;
            else
                cout << i << endl
                     << j;
        }
    }

    return 0;
}