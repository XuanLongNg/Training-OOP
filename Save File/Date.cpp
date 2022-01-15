#include<iostream>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;
    public:
    Date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void setDate(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void setDay(int day){ this->day=day;}
    void setMonth(int month){ this->month=month;}
    void setYear(int year){ this->year=year;}
    int getDay(){ return day;}
    int getMonth(){ return month;}
    int getYear(){ return year;}
    void display(){
        if(day<10) cout<<"0";
        cout<<day<<"/";
        if(month<10) cout <<"0";
        cout<<month<<"/";
        cout<<year<<endl;
    }
};