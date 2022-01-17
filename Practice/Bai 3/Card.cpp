#include<bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Card{
    private:
    string nameBook;
    string nameAuthor;
    int numberBook;
    public:
    Card(){
        nameBook="Unknown";
        nameAuthor="Unknown";
        numberBook=0;
    }
    Card(string nameBook,string nameAuthor, int numberBook){
        this->nameBook = nameBook;
        this->nameAuthor= nameAuthor;
        this->numberBook = numberBook;
    }
    void display(){
        cout<<"Name Book: "<<nameBook<<endl;
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