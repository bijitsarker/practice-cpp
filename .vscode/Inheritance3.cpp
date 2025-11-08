#include<iostream>
using namespace std;
class  object1{
    public:
    string name;
    int roll;
    void Sub1(){
        cout<<"Name :"<<name<<endl<<"Roll :"<<roll<<endl;
    }
};
class object2{
    public:
    int salary;
    double cgpa;
    void Sub2(){
        cout<<"Salary :"<<salary<<endl;
        cout<<"CGPA :"<<cgpa<<endl;

    }
        
};
class object3 : public object2, public object1{
    public:
    string subject;
    void Sub3(){
        cout<<"Subject:"<<subject<<endl;
        Sub1();
        Sub2();
        
    }
};
 int main(){
    object3 O3;
    O3.subject = "physics";
    O3.name = "Bijit";
    O3.roll = 35;
    O3.salary = 1000000;
    O3.cgpa = 9.34;
    O3.Sub1();
    O3.Sub2();
   
   

}