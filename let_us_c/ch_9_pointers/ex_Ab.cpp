#include <iostream>
using namespace std;

void fun(int *, int *);
int main()
{
    int i = 5, j = 2;
    fun(&i, &j);
    cout << i << endl
         << j << endl;
    return 0;
}

void fun(int *i, int *j) // Pass by pointer(or reference)
{
    *i = *i * *i;
    *j = *j * *j;
}