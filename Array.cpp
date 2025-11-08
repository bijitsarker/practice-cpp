#include <iostream>
using namespace std;
int main(){
    int arr[]= {1, 3, 6};
    int marks[6];
    for(int i=0; i<=10; i++){
        cout<<"Enter the marks of="<<i<<"th marks"<<endl;
        cin>>i;
    }
    for(int i=0; i<=10; i++){
        cout<<" marks of="<<i<<"th student is"<<marks[i]<<endl;
    }
    return 0;
}