#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    
    for(int i=0; i<n; i++){ //outer
       for(int j=0; j<i+1; j++){ //enar loop
        cout<<j<<",";
       
        
        }
       
        cout<<endl;
    }
    return 0;
}