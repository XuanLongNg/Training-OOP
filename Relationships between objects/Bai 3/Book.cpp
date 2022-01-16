#include <bits/stdc++.h>
#include <vector>
#include "Author.cpp"
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Book{
    private:
    string name;
    vector<Author> authors;
    double price;
    public:
    Book(string name,std::vector<Author> authors,double price){
        this->name = name;
        this->price = price;
        this->authors = authors;
    }
    void setName(string name){ this->name=name;}
    void setPrice(double price){ this->price=price;}
    string getName(){ return name;}
    double getPrice(){ return price;}
    string getAuthorNames(){
        string Name;
        For(i,0,authors.size()-1){
            Name+=authors[i].getName()+", ";
        }
        Name+=authors[authors.size()-1].getName();
        return Name;
    }
};