#include <iostream>
using namespace std;

void student(int *m1, int *m2, int *m3, double *avg, double *percentage)
{
    // Calculate average
    *avg = static_cast<double>(*m1 + *m2 + *m3) / 3;

    // Calculate percentage
    *percentage = (static_cast<double>(*m1 + *m2 + *m3) / 300) * 100;
}

int main()
{
    int m1, m2, m3;
    cout << "Enter the marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    double avg, percentage;
    student(&m1, &m2, &m3, &avg, &percentage);

    cout << "Average: " << avg << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}
