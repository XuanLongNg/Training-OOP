#include<bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Card{
    private:
    string name;
    string nameAuthor;
    int numberBook;
    public:
    Card(){
        name="Unknown";
        nameAuthor="Unknown";
        numberBook=0;
    }
    Card(string name,string nameAuthor, int numberBook){
        this->name = name;
        this->nameAuthor= nameAuthor;
        this->numberBook = numberBook;
    }
    void display(){
        cout<<"Name Book: "<<name<<endl;
        cout<<"Name Author: "<<nameAuthor<<endl;
        cout<<"Number Book: "<<numberBook<<endl;
    }
    int getNumBook(){ return numberBook;}
    
    static void sortCards(vector<Card>&cards){
        For(i,0,cards.size()-1){
            For(j,i,cards.size())
            if(cards[j].getNumBook()>cards[i].getNumBook())
            swap(cards[i],cards[j]);
        }
    }
};