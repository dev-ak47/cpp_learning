#include <iostream>
using namespace std;

void italy();
void brazil();
void argentina();

int main()
{
    cout << "I am in main\n";
    italy();
    cout << "I am finally back in main\n";
    return 0;
}

void italy()
{
    cout << "I am in Italy\n";
    brazil();
    cout << "I am back in Italy\n";
}
void brazil()
{
    cout << "I am in Brazil\n";
    argentina();
}
void argentina()
{
    cout << "I am in Argentina\n";
}