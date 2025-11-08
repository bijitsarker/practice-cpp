#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class bank{
    public:
   char name[100], address[100], y;
   int balance;
    
    void open_account();
    void diposite_money();
    void withdraw_money();
    void display_account();  
    
};



int main(){
    cout<<"open account"<<endl;
    cout<<"diposite money"<<endl;
    cout<<"withdraw money"<<endl;
    cout<<"display account"<<endl;

}
void bank :: open_account(){
     cout<<"Enter your Name:";
     cin.ignore();
     cin.getline(name,100);
     cout<<"Enter your Addrass:";
     cin.ignore();
     cin.getline(address,100);
     cout<<"what type of aqqount you want to open saving (s) or currount(c):";
     cin>>y;
     cout<<"Your amount for diposite:";
     cin>>balance;
     cout<<"Your amount is created"<<endl;

}

  void diopsite:diopsite_money(){
    int a;
    cout<<"Enter how mach you deposite: ";
    cin>>a;
    balance +=a;
    cout<<"total amount you deposite:"<<balance<<endl;

}
void balance ::display_account(){
cout<<"Your full name: "<<name<<endl;
cout<<"Your address: "<<address<<end;
cout>>>"type of account that you open: "<<y;

}