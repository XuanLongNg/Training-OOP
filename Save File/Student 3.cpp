#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
    int id;
    string name;
    int age;
    string address;
    int score;
    public:
    Student();
    Student(int id,string name, int age, string address,int score);
    void setId(int id){ this->id=id;}
    int getId(){ return id;}
    void setName(string name){ this->name=name;}
    string getName(){ return name;}
    void setAge(int age){ this->age=age;}
    int getAge(){ return age;}
    void setAddress(string address){ this->address=address;}
    string getAddress(){ return address;}
    void setScore(int score);
    int getScore(){ return score;}
};
Student::Student(){
    id=0;
    name="Unknown";
    age=0;
    address="Unknown";
    score=0;
}
Student::Student(int id,string name, int age, string address,int score){
    this->id=id;
    this->name=name;
    this->age=age;
    this->address=address;
    this->score=score;
}
void Student::setScore(int score){
    if(score>=0&&score<=10) this->score=score;
    else if(score<0) this->score=0;
    else this->score=10;
}