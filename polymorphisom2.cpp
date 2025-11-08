#include<iostream>
using namespace std;
class teacher{
    private:
    int Salary;
    

    public:
    void setSalary(int s){
        Salary = s;
        
    }
    string getSalary(){
      return Salary;
    }
};
int main(){
    teacher t1;
    t1.setSalary( 800000);
    
   t1.getSalary();

}