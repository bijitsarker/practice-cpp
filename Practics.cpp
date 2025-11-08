#include<iostream>
using namespace std;
int main(){
//   int a;
//     cout<<"Input number a:";
//     cin>>a;
//     for(int i=0; i<=10; i++){
    
//     cout<< a <<" x "<< i <<" = "<< a*i <<endl;
//     }

//     int n, i, sum = 1;
//     cout<<"N =";
//     cin>>n;
//    for(i=1; i<=n; i++){
//     cout<<i<<" ";
//     sum *= i;
//    }

//     cout << "\n The sum of the natural numbers is: " << sum << endl;
   int n;
   cout<<"N = ";
   cin>>n; 
   for(int i=1; i<n;i++){
    for(int j=0; j<i; j++){
        cout<<'*';
    }
    cout<<endl;
   }
   
}