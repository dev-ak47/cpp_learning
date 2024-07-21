#include <iostream>
using namespace std;

int main()
{
    int sub1, sub2, sub3, sub4, sub5, total;
    float percentage;
    cout << "Enter marks of 5 subjects:";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100.0;
    cout << "Total percentage:" << percentage;
    return 0;
}