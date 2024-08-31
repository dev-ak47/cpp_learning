#include <iostream>
using namespace std;

int main()
{
    unsigned char ch;
    for (ch = 0; ch <= 254; ch++)
    {
        cout << ch << endl;
        int b = static_cast<int>(ch);
        cout << ch << endl;
    }
}