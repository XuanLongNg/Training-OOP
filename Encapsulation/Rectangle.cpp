class Rectangle{
    private:
    double length;
    double width;
    public:
    Rectangle();
    Rectangle(double length,double width);
    void setLength(double length){ this->length=length;}
    void setWidth(double width){ this->width=width;}
    double getLength(){ return length;}
    double getWidth(){ return width;}
    double getArea(){ return length*width;}
    double getPerimeter(){ return 2*(length+width);}
};
Rectangle::Rectangle(){
    length=0;
    width=0;
}
Rectangle::Rectangle(double length,double width){ 
    this->length=length;
    this->width=width;
}