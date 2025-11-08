#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
     int b=1;
    for(int i=0; i<n; i++){ //outer
       for(int j=0; j<i+1; j++){ //enar loop
        cout<<b<<",";
        b++;
        
        }
       
        cout<<endl;
    }
    return 0;
}