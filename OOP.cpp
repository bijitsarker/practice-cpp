#include <iostream>
#include <string>
using namespace std;
    class Myclass{
    public:
    string name;
    double cgpa;
    
        
        void info(){
            cout<<"name:"<<name<<endl;
            cout<<"cgpa:"<<cgpa;

        }
    };
    class Myday:public Myclass{
        public:
        int count ;
        void infoN(){
            cout<<"count:"<<count<<endl;
            info();
        }
    };
    
    int main(){
       Myday m1;
       m1.count = 54;
       m1.name = "Bijit sarker";
       m1.cgpa = 9.5;
       m1.infoN();
       
        
    
    return 0;
}