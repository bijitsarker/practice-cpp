#include<iostream>
using namespace std;
class person{
    public:
    string name1;
    void Func0(){
        cout<<"Person Name :"<<name1<<endl;
    }
};
class teacher  : public person{
    public:
    string name2;
    void Func1(){
        cout<<"Teacher Name :"<<name2<<endl;
        Func0();
    }

};
class student : public teacher{
    public:
    string name3;
    void Func2(){
        cout<<"Student Name :"<<name3<<endl;
        Func1();
        
    }
};
class man : public student{
    public:
    string name4;
    void Func3(){
        cout<<"Man Name :"<<name4<<endl;
        Func2();
    }
};
int main(){
   
   man s;
    s.name1 = "Shakib";
    s.name2 = "Saiful";
    s.name3 = "Shihab";
    s.name4 = "Rahul";
    s.Func3();
   
    return 0;
}