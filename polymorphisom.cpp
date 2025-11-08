#include<iostream>
using namespace std;
class person{
    public:
    void func(){
        cout<<"i am person"<<endl;
    }
};
class teacher{
    public:
    void func(){
        cout<<"i am teacher"<<endl;
    }
};
class student{
    public:
    void func(){
        cout<<"i am student"<<endl;
    }

};
int main(){
    person p;
    teacher t;
    student s;
    p.func();
    t.func();
    s.func();


    return 0;
}