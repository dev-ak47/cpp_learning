#include <iostream>
using namespace std;

int main(){

    int no_of_employees=10;
    double overtime_rate=12.00;
    int reg_hrs=40;

    int hr_worked;
    float overtime_payment;
    
    for (int i=1;i<=no_of_employees;i++){
        cout<<"Enter number of hours worked by each employees "<<i<<" : ";
        cin>>hr_worked;

    if(hr_worked>reg_hrs)
    {
        int overtime_worked = hr_worked - reg_hrs;
        overtime_payment = overtime_worked * overtime_rate;
    }
    else {
        overtime_payment=0.00;
       }
       cout << "Overtime pay for employee " << i << ": Rs " << overtime_payment << endl;
    }
    
    return 0;
}