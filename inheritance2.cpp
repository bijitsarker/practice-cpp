#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int id;
    int roll;
    void display1(){
       cout<<"Name :" <<name<<endl;
       cout<<"Age  :" <<age<<endl;
       cout<<"Id   :" <<id<<endl;
       cout<<"Roll :" <<roll<<endl;
    }

};
class teacher:public student{  //student inheritance
    // cout<<"Name:"<<name<<endl;
    //      cout<<"Age:"<<age<<endl;
    //       cout<<"Id:"<<id<<endl;
    //        cout<<"Roll:"<<roll;
    public:
    int day;
    string choose;
   
    void display2(){
        
        display1();
    //    cout<<"Name  :" <<name<<endl;
    //    cout<<"Age   :" <<age<<endl;
    //    cout<<"Id    :" <<id<<endl;
    //    cout<<"Roll  :" <<roll<<endl;
       cout<<"Day   :"<<day<<endl;
       cout<<"Choose:"<<choose<<endl;
           
    }
};

int main(){
    teacher s1;
    s1.day = 7;
    s1.name = "Bijit";
    s1.age  = 17;
    s1.id   = 202;
    s1.roll = 12;
    s1.choose = "football";
    s1.display2();

    return 0;
}