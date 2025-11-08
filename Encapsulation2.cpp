#include<iostream>
using namespace std;

class Employee
{
    private:
    int salary;
    public:
    void setSalary(int x){
        salary = x;
    }
    int getSalary(){
        return salary;
    }


};
int main(){
    Employee ER; // make obj  ER
    ER.setSalary(820000);
    cout<<ER.getSalary();




    return 0;
}