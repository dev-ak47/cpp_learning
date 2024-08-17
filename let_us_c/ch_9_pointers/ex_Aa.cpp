#include <iostream>
using namespace std;

void fun(int, int);

int main()
{
    int i = 5, j = 2;
    fun(i, j);
    cout << i << endl
         << j;
    return 0;
}

void fun(int i, int j) // Pass by Value
{
    i = i * i;
    j = j * j;
}