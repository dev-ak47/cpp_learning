#include <iostream>
using namespace std;

int main()
{
    int dist, m, ft, inches, cm;
    cout << "Enter distance (in km) :";
    cin >> dist;
    m = dist * 1000;
    ft = dist * 3281;
    inches = dist * 39370;
    cm = dist * 100000;

    cout << endl
         << "Distance in m:" << m << endl;
    cout << "Distance in ft:" << ft << endl;
    cout << "Distance in inches:" << inches << endl;
    cout << "Distance in cm:" << cm << endl;
    return 0;
}