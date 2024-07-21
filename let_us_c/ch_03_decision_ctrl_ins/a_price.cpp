#include <iostream>
using namespace std;

int main()
{
    int cp, sp, pl;
    cout << "Enter Cost Price:";
    cin >> cp;
    cout << "Enter Selling Price:";
    cin >> sp;
    pl = sp - cp;

    if (sp > cp)
    {
        cout << "Profit=" << endl;
        cout << pl;
    }
    else
    {
        cout << "Loss=" << endl;
        cout << pl;
    }
    return 0;
}