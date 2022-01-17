#include "Point.cpp"
#include <vector>
#include <math.h>
#define For(i,a,b) for(int i=a;i<b;i++)
class PolyLine{
    private:
    vector<Point> points;
    public:
    PolyLine();
    PolyLine(vector<Point> points);
    void appendPoint(Point point);
    void appendPoint(int x,int y);
    double getLength();
};
PolyLine::PolyLine(){
    
}
PolyLine::PolyLine(std::vector<Point> points){
    For(i,0,points.size()) this->points[i]=points[i];
}
double PolyLine::getLength(){ 
    double k=0;
    For(i,0,points.size()-1){
        double a,b;
        a=pow(points[i].getX()-points[i+1].getX(),2);
        b=pow(points[i].getY()-points[i+1].getY(),2);
        k+=sqrt(a+b);
    }
    return k;
}
void PolyLine::appendPoint(Point point){
    points.push_back(point);
}
void PolyLine::appendPoint(int x,int y){
    Point a;
    a.setX(x);
    a.setY(y);
    points.push_back(a);
}