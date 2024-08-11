
// B. Point out the errors if any,in the following

#include <iostream>
using namespace std;

int addmult(int, int); // semicolon mistake

int main()
{
    int i = 3, j = 4, k, l;
    k = addmult(i, j);
    l = addmult(i, j);
    cout << k << " " << l; // 12 12
    return 0;
}

int addmult(int ii, int jj)
{
    int kk, ll;
    kk = ii + jj;    // 7
    ll = ii * jj;    // 12
    return (kk, ll); // Comma operator evaluates both expression but only the result of the second expression is returned.
}