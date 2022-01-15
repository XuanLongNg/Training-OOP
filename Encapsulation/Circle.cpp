#include <bits/stdc++.h>
using namespace std;
class Circle{
    private:
    double radius;
    public:
    Circle(double radius){
        this->radius=radius;
    }
    double getArea(){ return 3.14*pow(radius,2);}
    double getCircumference(){ return 2*3.14*radius;}
};