#include<iostream>
#include<string.h>
using namespace std;
class BankAccount{
    private:
    string accountnum;
    double balance;
    BankAccount(string a, double b){
        accountnum = a;
        balance = b;

    }
    void diposite(double amount){
        balance += amount;
        cout<<"Diposite successful. current balance:"<<balance<<endl;
    }
    void withdraw(double amount){
        if(balance >= amount){
            balance -= amount;
            cout<<"Withdrawal successful. current balance:"<<balance<<endl;
        }
        else{
            cout<<"Insufficient balance. cannot withdraw"<<endl;
        }
    }
};
int main(){
    std::string secno = "SB-123";
    double opening_balance, deposite_amt, withdrawal_amt;
    opening_balance = 2000;
    cout<<" A/C NO "<<secno<<" Balance "<<opening_balance<<endl; 

    BankAccount acount(secno, 1000.0);
   
    deposite_amt = 1990;
    cout<<" Diposite balance "<<deposite_amt<<endl;


}