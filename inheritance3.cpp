
#include<iostream>
using namespace std;
class mycar1{
    public:
    string car;
    void print1(){
        cout<<"Car :"<<car<<endl;
    }
};
class mycar2 : public mycar1{
    public:
    string game;
    void print2(){
        cout<<"Game :"<<game<<endl;
        print1(); // call the function
    }
};
int mani(){
    mycar2 s1;
    s1.car = "BMW";
    s1.game = "PUBJ";
    s1.print2();


    return 0;
}