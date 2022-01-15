#include<iostream>
#include<math.h>
using namespace std;
class Point{
    private:
    double x,y;
    public:
    Point(){
        x=0;
        y=0;
    }
    Point(double x,double y){
        this->x=x;
        this->y=y;
    }
    void setX(double x){ this->x=x;}
    void setY(double y){ this->y=y;}
    double getX(){ return x;}
    double getY(){ return y;}
    void setXY(double x,double y){
        this->x=x;
        this->y=y;
    }
    double distance(double x,double y){
        return sqrt(pow(this->x - x,2)+pow(this->y -y,2));
    }
    double distance(Point another){
        return sqrt(pow(x-another.getX(),2)+pow(y-another.getY(),2));
    } 
};