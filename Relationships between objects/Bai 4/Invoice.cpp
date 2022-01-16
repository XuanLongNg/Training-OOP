#include "Customer.cpp"
#include <bits/stdc++.h>
using namespace std;
class Invoice{
    private:
    int id;
    Customer customer;
    double amount;
    public:
    Invoice(int id, Customer customer,double amount){
        this->id= id;
        this->customer = customer;
        this->amount = amount;
    }
    void getId(int id){ this->id=id;}
    void getCustomer(Customer customer){ this->customer=customer;}
    void getAmount(double amount){ this->amount=amount;}
    int getId(){ return id;}
    Customer getCustomer(){ return customer;}
    double getAmount(){ return amount;}
    string getCustomerName(){
        return customer.getName();
    }
    double getAmountAfterDiscount(){
        return amount-(amount*customer.getDiscount()/100);
    }
    
};