#include "Point.cpp"
#include <math.h>
double getLength(Point a,Point b){ 
    return (double)sqrt(pow(a.getX()-b.getX(),2)+pow(a.getY()-b.getY(),2));
}
class Triangle{
    private:
    Point vertice1;
    Point vertice2;
    Point vertice3;
    public:
    Triangle(Point vertice1,Point vertice2,Point vertice3);
    Triangle(int x1,int y1,int x2,int y2,int x3,int y3);
    double getPerimeter();
    
};
Triangle::Triangle(Point vertice1,Point vertice2,Point vertice3){
    this->vertice3=vertice3;
    this->vertice2=vertice2;
    this->vertice1=vertice1;
}
Triangle::Triangle(int x1,int y1,int x2,int y2,int x3,int y3){
    vertice1.setX(x1);
    vertice1.setY(y1);
    vertice2.setX(x2);
    vertice2.setY(y2);
    vertice3.setX(x3);
    vertice3.setY(y3);
}
double Triangle::getPerimeter(){
    double a,b,c;
    a=getLength(vertice1,vertice2);
    b=getLength(vertice3,vertice2);
    c=getLength(vertice1,vertice3);
    return a+b+c;
}