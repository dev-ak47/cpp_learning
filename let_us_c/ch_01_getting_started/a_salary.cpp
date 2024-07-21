#include <iostream>
using namespace std;

int main()
{
  int basicSalary, da, house_rent, grossSalary;
  cin >> basicSalary;

  da = 0.4 * basicSalary;
  house_rent = 0.2 * basicSalary;

  grossSalary = basicSalary + da + house_rent;

  cout << "Gross Salary is " << grossSalary << endl;

  return 0;
}