#include<iostream>
using namespace std;
int main(){
    float n1;
    cout<<"Enter frist numbers:";
    cin>>n1;
    char op;
    cout<<"Enter  charcter:";
    cin>>op;
    float n2;
    cout<<"Enter last numbers:";
    cin>>n2;
   // char ops;
    //cout<<"Enter second charcter:";
   // cin>>ops;
   // float n3;
  //  cout<<"Enter last numbers:";
  switch(op){
    case '+':
    cout<<n1+n2<<" ";
    break;
    case '-':
    cout<<n1-n2<<" ";
    break;
    case '*':
    cout<<n1*n2<<" ";
    break;
    case '/':
    cout<<n1/n2<<" ";
    break;
    default:
    cout<<"invalid numbers_________________:";
  }

    return 0;
}