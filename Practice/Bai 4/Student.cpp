#include<iostream>
#include<vector>
#include<algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Student{
    private:
    string name;
    double math;
    double physic;
    double chemistry;
    public:
    Student(){
        name="Unknown";
        math=0;
        physic=0;
        chemistry=0;
    }
    Student(string name,double math, double physic,double chemistry){
        this->name = name;
        this->math= math;
        this->physic= physic;
        this->chemistry= chemistry;
    }
    string getName(){ return name;}
    double getMath(){ return math;}
    double getPhysic(){ return physic;}
    double getChemistry(){ return chemistry;}
    void  setName(string name){ this->name=name;}
    void setMath(int math){ this->math=math;}
    void setPhysic(int physic){ this->physic=physic;}
    void setChemistry(int chemistry){ this->chemistry=chemistry;}
    void display(){
        cout<<"Name: "<< name << endl;
        cout<<"Point math: "<< math << endl;
        cout<<"Point physic: "<< physic<<endl;
        cout<<"Point chemistry: "<< chemistry << endl;
        cout<<"Average: "<<(math+physic+chemistry)/3<<endl;
    }
    double avgPoint(){
        return (math+physic+chemistry)/3;
    }
    static vector<Student> getStudentMaxAvg ( vector<Student> vt ){
        vector<Student> vt1;
        double max=vt[0].avgPoint();
        For(i,0,vt.size())
        if(vt[i].avgPoint()>max) max=vt[i].avgPoint();
        For(i,0,vt.size())
        if(vt[i].avgPoint()==max)
        vt1.push_back(vt[i]);
        return vt1;
    }
    static vector<Student>getStudentMaxMath (vector<Student> vt){
        vector<Student> vt1;
        double max=vt[0].getMath();
        For(i,0,vt.size())
        if(vt[i].getMath()>max) max=vt[i].getMath();
        For(i,0,vt.size())
        if(vt[i].getMath()==max)
        vt1.push_back(vt[i]);
        return vt1;
    }
    static vector<Student>getStudentMaxPhysic ( vector<Student> vt){
        vector<Student> vt1;
        double max=vt[0].getPhysic();
        For(i,0,vt.size())
        if(vt[i].getPhysic()>max) max=vt[i].getPhysic();
        For(i,0,vt.size())
        if(vt[i].getPhysic()==max)
        vt1.push_back(vt[i]);
        return vt1;
    }
    static vector<Student>getStudentMaxChemistry ( vector<Student> vt){
        vector<Student> vt1;
        double max=vt[0].getChemistry();
        For(i,0,vt.size())
        if(vt[i].getChemistry()>max) max=vt[i].getChemistry();
        For(i,0,vt.size())
        if(vt[i].getChemistry()==max)
        vt1.push_back(vt[i]);
        return vt1;
    }
};