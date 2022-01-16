#include "Person.cpp"
class Customer: public Person{
    private:
    int balance;
    public:
    Customer(string name,string address,int balance):Person(name,address){ 
        this->balance=balance;
    }
    void display(){
        cout<<"Customer name: "<<getName()<< endl;
        cout<<"Customer address: "<<getAddress()<< endl;
        cout<<"Customer salary: "<<balance<<endl;
    }
};