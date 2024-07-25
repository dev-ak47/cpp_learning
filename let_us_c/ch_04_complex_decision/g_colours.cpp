#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    float r,g,b,rf,gf,bf,w,max;
    float c,m,y,k;
    std::cout<<"Enter the value of Red(0 to 255:)";
    cin>>r;
    std::cout<<"Enter the value of Green(0 to 255:)";
    cin>>g;
    std::cout<<"Enter the value of Blue(0 to 255):";
    cin>>b;

    rf=r/255;
    gf=g/255;
    bf=b/255;

    std::cout<<"Red:"<<rf<<"\nGreen:"<<gf<<"\nBlue:"<<bf<<endl;

    max = std::max(rf,std::max(gf,bf));

    w=max;
    std::cout<<"White:"<<w<<endl;

    if(w==0){
        c=0;
        m=0;
        y=0;
        k=1;
    }else{
        c=(w-rf)/w;
        m=(w-gf)/w;
        y=(w-bf)/w;
        k=1-w;
    }
    std::cout<<"The value of Cyan:"<<c<<endl;
    std::cout<<"The value of Magenta:"<<m<<endl;
    std::cout<<"The value of Yellow:"<<y<<endl;
    std::cout<<"The value of Black:"<<k<<endl;

    return 0;
}