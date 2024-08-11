#include <iostream>
using namespace std;

void message();
int main()
{
    message(message());
    return 0;
}

void message()
{
    cout << "Its a small world after all...\n";
}