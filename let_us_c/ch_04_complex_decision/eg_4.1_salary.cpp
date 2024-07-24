#include <iostream>
using namespace std;

int main(){
    char g; 
    int yos,qs,salary;
    cout<<"Enter your gender (m for male and f for female*):";
    cin>>g;
    cout<<"Enter Years Of Service:";
    cin>>yos;
    cout<<"Enter your Qualifications (0=G,1=PG):";
    cin>>qs;
    if (g == 'm' && yos>=10 && qs==1){
        cout<<"Salary=15000";
    }
    else if (g == 'm' && yos>=10 && qs==0){
        cout<<"Salary=10000";
    }
    else if (g == 'm' && yos<10 && qs==1){
        cout<<"Salary=10000";
    }
    else if (g == 'm' && yos<10 && qs==0){
        cout<<"Salary=7000";
    }
    else if (g == 'f' && yos>=10 && qs==1){
        cout<<"Salary=12000";
    }
    else if (g == 'f' && yos>=10 && qs==0){
        cout<<"Salary=9000";
    }
    else if (g == 'f' && yos<10 && qs==1){
        cout<<"Salary=10000";
    }
    else if (g == 'f' && yos<10 && qs==0){
        cout<<"Salary=6000";
    }
    return 0;
}