#include <iostream>
using namespace std;

int main()
{
    int num3;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0)
            continue;
        cout << i;
    }
    return 0;
}