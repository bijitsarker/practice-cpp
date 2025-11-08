#include<iostream>
using namespace std;

    class person{
        public:
        string name ;
        int age ;
        void print1(){
        
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
            
        }
    };
    class student:public person //inheritance
    {
        // cout<<"Name:"<<name<<endl;
        //  cout<<"Age:"<<age<<endl;
        public:
        int id;
        void print2(){
          
            // 
            print1();
              cout<<"Id:"<<id;
        }
    };
 int main(){
     student s1;
    s1.id = 101;
    s1.name = "bijit";
    s1.age = 18;
    s1.print2();

 }