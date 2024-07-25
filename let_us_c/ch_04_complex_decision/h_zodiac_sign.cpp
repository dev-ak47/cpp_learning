#include <iostream>
using namespace std;

int main(){
    int month,date;
    cout<<"Enter month and date (eg-December22):";
    cin>>month>>date;
    if((month==12 && date>=22) || (month==1 && date<=19)){
        cout<<"Zodiac sign = Capricorn";
    }
    else if((month==1 && date>=20) || (month==2 && date<=17)){
        cout<<"Zodiac sign = Aquarius";
    }
    else if((month==2 && date>=18) || (month==3 && date<=19)){
        cout<<"Zodiac sign = Pisces";
    }
    else if((month==3 && date>=20) || (month==4 && date<=19)){
        cout<<"Zodiac sign = Aries";
    }
    else if((month==4 && date>=20) || (month==5 && date<=20)){
        cout<<"Zodiac sign = Taurus";
    }
    else if((month==5 && date>=21) || (month==6 && date<=20)){
        cout<<"Zodiac sign = Gemini";
    }
    else if((month==6 && date>=21) || (month==7 && date<=22)){
        cout<<"Zodiac sign = Cancer";
    }
    else if((month==7 && date>=23) || (month==8 && date<=22)){
        cout<<"Zodiac sign = Leo";
    }
    else if((month==8 && date>=23) || (month==9 && date<=22)){
        cout<<"Zodiac sign = Virgo";
    }
    else if((month==9 && date>=23) || (month==10 && date<=22)){
        cout<<"Zodiac sign = Libra";
    }
    else if((month==10 && date>=23) || (month==11 && date<=21)){
        cout<<"Zodiac sign = Scorpio";
    }
    else if((month==11 && date>=22) || (month==12 && date<=21)){
        cout<<"Zodiac sign = Sagittarius";
    }
    return 0;
}