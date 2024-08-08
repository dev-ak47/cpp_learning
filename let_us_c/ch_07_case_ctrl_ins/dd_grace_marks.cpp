#include <iostream>
using namespace std;

int main(){
    int c,s;
    cout<<"Enter your class (eg : 1 for first) :"; 
    cin>>c;
    cout<<"Enter the number of subjects you have failed in :";
    cin>>s;

    switch(c){
        case 1:
        if(s<=3){
            cout<<"The grace marks obtained is:"<<5*s<<endl;
        }
        else{
            cout<<"No grace marks\n";
        }
        break;
        case 2:
        if(s<=2){
            cout<<"The grace marks obtained is:"<<4*s<<endl;
        }
        else{
            cout<<"No grace marks\n";
        }
        break;
        case 3:
        if(s<=1){
            cout<<"The grace marks obtained is:"<<5*s<<endl;
        }
        else{
            cout<<"No grace marks\n";
        }
        break;
        default:
        cout<<"Wish you got grace marks.";
    }

    return 0;
}