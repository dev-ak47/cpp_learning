#include <iostream>
using namespace std;

int main()
{
    int count3 = 0, count5 = 0;
    int sum3 = 0, sum5 = 0;
    int i = 1;
    while (count3 < 10 || count5 < 10)
    {
        if (count3 < 10)
        {
            sum3 = sum3 + (3 * i);
            count3++;
        }
        if (count5 < 10)
        {
            if (count5 < 10)
            {
                sum5 = sum5 + (5 * i);
                count5++;
            }
            i++;
        }
    }
    cout << "The sum of first ten multiples of 3 is : " << sum3 << endl;
    cout << "The sum of first ten multiples of 5 is : " << sum5 << endl;
    return 0;
}