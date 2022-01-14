#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Rectangle{
    public:
    double length;
    double width;
    public:
    Rectangle();
    Rectangle(double length,double width);
    ~Rectangle(){}
    void getInformation();
    void display();
    double getArea(){ return length*width; }
    double getPerimeter(){ return 2*(length+width); }
};
Rectangle::Rectangle(){
    length=0;
    length=0;
}
Rectangle::Rectangle(double length,double width){
    this->length=length;
    this->width=width;
}
void Rectangle::getInformation(){
    cin>>length>>width;
}
void Rectangle::display(){
    cout<<"Area: "<<getArea()<<endl;
    cout<<"Perimeter: "<<getPerimeter()<<endl;
}
int main() {
    Rectangle s1;
    s1.getInformation();
    s1.display();
    return 0;
}