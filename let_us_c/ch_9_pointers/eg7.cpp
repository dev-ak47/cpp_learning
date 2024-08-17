#include <iostream>
using namespace std;
void areaperi(int, float *, float *);

int main()
{
    int radius;
    float area, perimeter;

    cout << "Enter radius of circle: ";
    cin >> radius;
    areaperi(radius, &area, &perimeter);

    cout << "Area " << area << endl;
    cout << "Perimeter=" << perimeter << endl;
    return 0;
}

void areaperi(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}