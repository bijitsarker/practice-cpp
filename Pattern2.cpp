#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    
    for(int i=0; i<=n; i++){ //outer
       int num =1;
       for(int j=0; j<=n; j++){ //enar loop
        cout<<num<<" ";
        
         num = num+1;
         
        }
        cout<<endl;
        
    }
    return 0;
}