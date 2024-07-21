#include <iostream>
using namespace std;

int main()
{
    int r_age, s_age, a_age;
    cout << "Enter age of Ram:";
    cin >> r_age;
    cout << "Enter age of Shyam:";
    cin >> s_age;
    cout << "Enter age of Ajay:";
    cin >> a_age;
    if (r_age < s_age && r_age < a_age)
    {
        cout << "Ram is youngest.";
    }
    else if (s_age < r_age && s_age < a_age)
    {
        cout << "Shyam is youngest.";
    }
    else
    {
        cout << "Ajay is youngest.";
    }
    return 0;
}