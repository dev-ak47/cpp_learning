#include <iostream>
using namespace std;

int main(){
    int goals;
    cout<<"Enter the numbers of goals scored against India :";
    cin>>goals;
    
    if(goals<=5)
    goto sos;
    else{
        cout<<"About time soccer players learnt C ";
        cout<<"and said goodbye!adieu!to soccer"<<endl;
        exit(1);
    }
    sos:
    cout<<"To err is human!";

    return 0;
}