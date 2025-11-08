#include<iostream>
#include<vector>
using namespace std;
int main(){
    // //...........Foreach loop.......
    // int arr[]={1,2,3,4,5};
    // for(int x : arr){
    //     cout<<x<<" ";
    // }

    //.......vector+Foreach loop........
    vector<int>value ={20,30,40,50,60};
    for(int& num : value){//  Foreach loop
        num *=2;
    }
        for(int num : value){// Foreach loop
         cout<<num<<endl;
        }
       
    cout<<endl;
}