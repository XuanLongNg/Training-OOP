#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Student{
    public:
    string name;
    int age;
    public:
    Student();
    Student(string name,int age);
    ~Student(){}
    void getInformation();
    void display();
};
Student::Student(){
    name="No name";
    age=0;
}
Student::Student(string name,int age){
    this->name=name;
    this->age=age;
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
int main() {
    Student s1;
    s1.getInformation();
    s1.display();
    return 0;
}