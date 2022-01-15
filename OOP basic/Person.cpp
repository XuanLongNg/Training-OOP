#include<bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Person{
    public:
    string name;
    string date;
    string gender;
    string address;
    public:
    Person();
    Person(string name,string date,string gender,string address);
    ~Person(){}
    void input();
    void output();
    void name_standardized();
    void date_standardized();
    void address_standardized();
};
Person::Person(){
    name="No name";
    date="00/00/0000";
    gender="No gender";
    address="No address";
}
Person::Person(string name,string date,string gender,string address){
    this->name=name;
    this->date=date;
    this->gender=gender;
    this->address=address;
}
void Person::input(){
    scanf("\n");
    getline(cin,name);
    cin>>date;
    cin>>gender;
    scanf("\n");
    getline(cin,address);
}
void Person::output(){
    cout<<"Name: "<<name<<endl;
    cout<<"Date: "<<date<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Address: "<<address<<endl;
}
void Person::name_standardized(){
    stringstream ss(name);
    string token,x;
    while(ss>>token){
        x+=token+" ";
    }
    For(i,0,x.size()){
        if(x[i]>='A'&&x[i]<='Z') x[i]+=32;
    }
    x[0]-=32;
    For(i,0,x.size()){
        if(x[i]==' ') x[i+1]-=32;
    }
    name=x;
}
void Person::date_standardized(){
    if(date[2]!='/') date.insert(0,"0");
    if(date[5]!='/') date.insert(3,"0");
}
void Person::address_standardized(){
    stringstream ss(address);
    string token,x;
    while(ss>>token){
        x+=token+" ";
    }
    For(i,0,x.size()){
        if(x[i]>='A'&&x[i]<='Z') x[i]+=32;
    }
    x[0]-=32;
    For(i,0,x.size()){
        if(x[i]==' '||x[i]=='-') x[i+1]-=32;
    }
    address=x;
}
int main() {
    Person a;
    //Person a("Xuan Long",19,"Nam","Van Ha-Dong Anh");
    a.input();
    a.name_standardized();
    a.date_standardized();
    a.address_standardized();
    a.output();
}