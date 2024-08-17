#include <iostream>
#include <math.h>
using namespace std;

void calculateStats(int *n1, int *n2, int *n3, int *n4, int *n5, int *sum, double *average, double *stdDev)
{

    *sum = (*n1 + *n2 + *n3 + *n4 + *n5);

    *average = (*sum) / 5;

    double variance = (pow(*n1 - *average, 2) + pow(*n2 - *average, 2) +
                       pow(*n3 - *average, 2) + pow(*n4 - *average, 2) +
                       pow(*n5 - *average, 2)) /
                      5;

    *stdDev = sqrt(variance);
}

int main()
{
    int n1, n2, n3, n4, n5;

    cout << "Enter 5 integers:";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int sum;
    double average, stdDev;

    calculateStats(&n1, &n2, &n3, &n4, &n5, &sum, &average, &stdDev);

    cout << "Sum:" << sum << endl;
    cout << "Average:" << average << endl;
    cout << "Standard Deviation:" << stdDev << endl;

    return 0;
}