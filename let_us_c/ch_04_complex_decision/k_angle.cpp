#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double angleDegrees,angleRadians;
    double sine,cosine,sumOfSquares;

    cout<<"Enter the angle in degrees: ";
    cin>>angleDegrees;

    angleRadians = angleDegrees * (M_PI/100.0);
    sine=sin(angleRadians);
    cosine=cos(angleRadians);

    sumOfSquares = pow(sine,2) + pow(cosine,2);
    cout<<"sin("<<angleDegrees << " degrees) = "<<sine<<endl;
    cout << "cos(" << angleDegrees << " degrees) = " << cosine << endl;
    cout << "sin^2(" << angleDegrees << " degrees) + cos^2(" << angleDegrees << " degrees) = " << sumOfSquares << endl;

    if (sumOfSquares == 1) {
        cout << "The sum of the squares of sine and cosine is approximately equal to 1." << endl;
    } else {
        cout << "The sum of the squares of sine and cosine is not equal to 1." << endl;
    }

    return 0;
}