#include<iostream>
using namespace std;
void fun(){
    int x;
    cout<<" Enter x ::";
    cin>>x;
    for(int i=0; i<x; i++){
        if(x<20){ cout<<"20 less numbers "<<endl;}
         else{ cout<<"20 over numbers "<<endl;}
    }
   

}


int main(){ 
    fun();
    fun();
    fun();
   
  
  
}