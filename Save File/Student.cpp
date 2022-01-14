#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    Student();
    void getInformation();
    void display();
};
Student::Student(){
    name="No name";
    age=0;
}
void Student::getInformation(){
    scanf("\n");
    getline(cin,name);
    cin>>age;
}
void Student::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}