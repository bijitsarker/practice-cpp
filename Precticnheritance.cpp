#include<iostream>
using namespace std;
class person{
public:
    string name;
    int age;
    int salary;

    
    person(){
        cout<<"name,age,roll,salary"<<endl; //constructor
    }
    void getInfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Salary :"<<salary<<endl;
    }

};
class student : public person{
     public:
     int roll;
     void setInfo(){
        cout<<"Roll :"<<roll<<endl;
        getInfo();   

     }
};
int main(){
    student s1;
    s1.roll = 23;
    s1.name = "Bijit";
    s1.age = 17;
    s1.salary = 1000000;
    s1.setInfo();


}