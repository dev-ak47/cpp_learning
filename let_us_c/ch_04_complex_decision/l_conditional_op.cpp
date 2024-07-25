#include <iostream>
using namespace std;

int main(){
    float salary;
    cout<<"Enter the salary:";
    cin>>salary;
    string result=(salary>=25000 && salary<=40000)?"Manager":(salary>=15000 && salary<25000)?"Accountant":"Clerk";
    cout<<result;

    return 0;
}