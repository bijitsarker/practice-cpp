#include<iostream>
using namespace std;
int main(){
    float n1;
    cout<<"Enter frist number:";
    cin>>n1;
    
    char op;
    cout<<"Enter char:";
    cin>>op;

    float n2;
    cout<<"Enter second number:";
    cin>>n2;
    if(op=='+'){
     
        cout<<"The velue of :"<<n1+n2<<endl;
    }
    if(op=='-'){
        cout<<"The velue of :"<<n1-n2<<endl;
    }
    if(op=='*'){
        cout<<"The velue of :"<<n1*n2<<endl;
    }
    if(op=='/'){
        cout<<"The velue of :"<<n1/n2<<endl;
    }
    return 0;
}