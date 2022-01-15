#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    char gender;
    public:
    Student();
    Student(string name);
    Student(char gender);
    Student(string name, char gender);
    void display();
};
Student::Student(){
    name="Unknown";
    gender='u';
}
Student::Student(string name){
    this->name=name;
    gender='u';
}
Student::Student(char gender){
    this->gender=gender;
    name="Unknown";
}
Student::Student(string name,char gender){
    this->name=name;
    this->gender=gender;
}
void Student::display(){
    cout<<"Name: "<<name<<endl;
    if(gender=='u')
    cout<<"Gender: Unknown"<<endl;
    if(gender=='m')
    cout<<"Gender: Male"<<endl;
    if(gender=='f')
    cout<<"Gender: Female"<<endl;
}