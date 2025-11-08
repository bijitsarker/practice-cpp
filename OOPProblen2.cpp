#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    string sub;
    public:
    // person(string n, int a, string s){
    //     name = n;
    //     age = a;
    //     sub = s;
    //}
    void setname(string n){
        name = n;
    }
    void setage(int a){
        age = a;
    }
    void setsub(string s){
        sub = s;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    string getsub(){
        return sub;
    }
};
int main(){
    person p1;
    p1.setname("Bijit");
    p1.setage(34);
    p1.setsub("physics");

    cout<<"Name = "<<p1.getname()<<endl;
    cout<<"Age = "<<p1.getage()<<endl;
    cout<<"Sub = "<<p1.getsub();
}