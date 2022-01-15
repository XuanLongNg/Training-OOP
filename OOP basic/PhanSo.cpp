#include <bits/stdc++.h>
using namespace std;
class Fraction{
    public:
    int numerator;
    int denominator;
    public:
    Fraction();
    Fraction(int n,int d);
    ~Fraction(){}
    void input(){
        cin>>numerator;
        cin>>denominator;
    }
    void output(){
        cout<<numerator<<"/"<<denominator;
    }
    void Compact();
    Fraction Total(Fraction a);
    Fraction Subtract(Fraction a);
    Fraction Multiply(Fraction a);
    Fraction Divide(Fraction a);

};
Fraction::Fraction(){
    numerator=0;
    denominator=1;
}
Fraction::Fraction(int numerator,int denominator){
    this->numerator=numerator;
    this->denominator=denominator;
}
Fraction Fraction::Total(Fraction a){
    Fraction b;
    b.numerator= numerator*a.denominator+denominator*a.numerator;
    b.denominator= denominator*a.denominator;
    return b;
}
Fraction Fraction::Subtract(Fraction a){
    Fraction b;
    b.numerator= numerator*a.denominator-denominator*a.numerator;
    b.denominator= denominator*a.denominator;
    return b;
}
Fraction Fraction::Multiply(Fraction a){
    Fraction b;
    b.numerator= numerator*a.numerator;
    b.denominator= denominator*a.denominator;
    return b;
}
Fraction Fraction::Divide(Fraction a){
    Fraction b;
    b.numerator= numerator*a.denominator;
    b.denominator= denominator*a.numerator;
    return b;
}
void Fraction::Compact(){
    int a=__gcd(numerator,denominator);
    numerator/=a;
    denominator/=a;
}
int main(){
    Fraction a,b;
    a.input();
    b.input();
    a=a.Total(b);
    a.Compact();
    a.output();
}
