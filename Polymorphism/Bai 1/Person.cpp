#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    string address;
    public:
    Person(string name,string address);
    void setName(string name){ this->name=name;}
    void setAddress(string address){ this->address=address;}
    string getName(){ return name;}
    string getAddress(){ return address;}
    void display(){
        cout<<"Name: "<< name << endl;
        cout<<"Address: "<< address << endl;
    }
};
Person::Person(string name,string address){ 
    this->address=address;
    this->name=name;
}