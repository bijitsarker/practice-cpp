#include<iostream>
using namespace std;
int main(){
    // int matrix[3][4] = {{1, 2, 3,4}, { 5, 6, 7, 8}, { 9 ,10, 11, 12}};
    // cout<<"Matrix = "<<matrix[1][3];
   
for(int i=2; i<10; i++){
    for(int j=0; j<i; j++){
        for(int x=0; x<j; x++){
            for(int r=0; r<i; r++){
    cout<<i<<" ";
            }
           
        }
       cout<<endl;
    }
   
   cout<<endl;
}
 cout<<endl;
    
    return 0;
}