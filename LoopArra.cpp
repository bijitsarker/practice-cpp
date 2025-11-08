#include<iostream>
#include <limits.h>
using namespace std;
int main(){
    
    // int marks[5];
    // for(int i=0; i<10; i++){
    //     cin>>marks[i];
    // }
    
    // for(int i=0; i<10; i++){
    //     cout<<marks[i]<<endl;
    // }
    int marks[8]={23, 45, 36, 76, -90,400,700,-600};
    int size = 8;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0; i<size; i++){
        
            smallest = min(marks[i],smallest);
            largest = max(marks[i],largest); 
        
    }
            cout<<"smallest = "<<smallest<<endl;
            cout<<"largest = "<<largest;
    return 0;
}