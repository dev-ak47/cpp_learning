#include <iostream>
using namespace std;

// Function should always be defined before main function else you have to declare the function before main

void display(int j = 40) // default value of j=40
{
    int k = 35;
    cout << j << endl;
    cout << k << endl;
}
int main()
{
    int i = 20;
    display(i);
    return 0;
}
