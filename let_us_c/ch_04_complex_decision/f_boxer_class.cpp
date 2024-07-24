#include <iostream>
using namespace std;

int main(){
    int wgt;
    cout<<"Enter weight to get the Boxer's weight class:";
    cin>>wgt;
    if(wgt<150){
        cout<<"Flyweight";
    }
    else if(wgt>=150 && wgt<=121){
        cout<<"Bantamweight";
    }
    else if(wgt>=122 && wgt<=153){
        cout<<"Featherweight";
    }
    else if(wgt>=154 && wgt<=189){
        cout<<"Middleweight";
    }
    else if (wgt>=190){
        cout<<"Heavyweight";
    }

    return 0;
}