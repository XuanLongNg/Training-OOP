#include<iostream>
#include<math.h>
using namespace std;
class Account{
    private:
    int id;
    string name;
    int balance;
    public:
    Account(int id,string name){
        this->id=id;
        this->name=name;
        balance=0;
    }
    Account(int id,string name,int balance){
        this->id=id;
        this->name=name;
        this->balance=balance;
    }
    int getId(){ return id;}
    string getName(){ return name;}
    int getBalance(){ return balance;}
    void setName(string name){ this->name=name;}
    void deposit(int amount){ balance+=amount;} 
    void withdraw(int amount){
        if(balance-amount<0)
        cout<<"That amount exceeds your current balance.​"<<endl;
        else balance-=amount;
    }
    void display(){
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};