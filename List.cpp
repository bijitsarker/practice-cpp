#include<iostream>
#include<list>
using namespace std;
int main(){
    //list<int>num = {20,34,45,23,34,56};
    // for(int number : num){
    //     if(number==45){
    //          continue;
    //         break;
    //     }
    //     cout<<number<<" ";
    // cout<<num.front(); //print 20
    // cout<<num.back();  // print 56

    // }

 //////fornt & back//////
    
    // list<string>car = {"BMW"," Tesla","Ford"};
    // car.front() = "Mazda";
    // car.back() = "Lemborgini";
    // for(string cars : car){
    //     cout<<cars<<" ";
    // }

    /////////////////////////////////////
      list<string>car = {"BMW"," Tesla","Ford"};
    car.push_front("Lemborgini");
    car.push_back("Mazda");
    for(string cars:car){
        cout<<cars<<" ";

    }

}