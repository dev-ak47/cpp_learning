#include <iostream>
#include <math.h>
using namespace std;

//Function to calculate distance between two points
double distance(double *x1,double *y1,double *x2,double *y2){
    return sqrt(pow((*x2-*x1),2))+pow((*y2-*y1),2);
}

//Function to calculate the area of a triangle using Heron's formula
double area(double *x1,double *y1,double *x2,double *y2,double *x3,double *y3){
    double a=distance(x1,y1,x2,y2);
    double b=distance(x2,y2,x3,y3);
    double c=distance(x3,y3,x1,y1);

    double s=(a+b+c)/2.0; //semi-perimeter
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int isPointInsideTriangle(double *x,double *y,double *x1,double *y1,double *x2,double *y2,double *x3,double *y3){
    //Area of the full triangle ABC
    double A=area(x1,y1,x2,y2,x3,y3);

    //Area of the sub-triangles PAB,PBC and PCA
    double A1=area(x,y,x1,y1,x2,y2);
    double A2=area(x,y,x2,y2,x3,y3);
    double A3=area(x,y,x3,y3,x1,y1);

    //Check if the sum of A1,A2 and A3 is equal to A
    if (fabs(A-(A1+A2+A3))<1e-9){
        return 1;   //Point lies inside the triangle
    }else{
        return 0;   //Point lies outside the triangle
    }
}

int main(){
    double x1=0,y1=0,x2=4,y2=0,x3=0,y3=3;
    double x=1,y=1;

    int result = isPointInsideTriangle(&x, &y, &x1, &y1, &x2, &y2, &x3, &y3);

    if (result == 1) {
        std::cout << "The point (" << x << ", " << y << ") lies inside the triangle ABC." << std::endl;
    } else {
        std::cout << "The point (" << x << ", " << y << ") lies outside the triangle ABC." << std::endl;
    }

    return 0;
}