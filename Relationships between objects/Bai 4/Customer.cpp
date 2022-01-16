#include<iostream>
#pragma once
using namespace std;
class Customer{
    private:
    int id;
    string name;
    int discount;
    public:
    Customer(){
        id=0;
        name="Unknown";
        discount=0;
    }
    Customer(int id,string name,int discount){
        this->id = id;
        this->name = name;
        this->discount= discount;
    }
    int getId(){ return id;}
    string getName(){ return name;}
    int getDiscount(){ return discount;}
    void setName(string name){ this->name=name;}
    void setId(int id) { this->id=id;}
    void setDiscount(int discount){ this->discount=discount;}
};
