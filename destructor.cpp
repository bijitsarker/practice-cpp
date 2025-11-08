#include<iostream>
using namespace std;
class student{
public:
string name;
double gpa;

student(string name, double gpa){
    this->name = name;
    this->gpa = gpa;
   
}
     //  destrutor
     ~student(){
        cout<<"Hi, i deleted everthing.<<endl";
        //delete gpa;
     }
     void Student(){
        cout<<"Name :"<<name<<endl;
        cout<<"GPA  :"<<gpa<<endl;
     }
};
int main(){
    student s1("Bijit", 4.89);
    s1.Student();
}