#include <iostream>
using namespace std;

int main()
{
    int num, s = 0;
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            s = s + i;
    }
    if (num == s)
        cout << "It is a perfect number.";
    else
        cout << "It is not a perfect number.";
    return 0;
}