#include<iostream>
using namespace std;
int main(){
   int i, j, n;
   cout<<"Input the number n:";
   cin>>n;
   for(i=n; i>=1;--i){
    for(j=1; j<=i+5-i;j++)
        cout<<" ";
        for(j=1; j<=i; j++)
            cout<<j;
            for (j = i - 1; j >= 1; j--)
            cout<<j;

            cout<<endl;
        
    
   }
}