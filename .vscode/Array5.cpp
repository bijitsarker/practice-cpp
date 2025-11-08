#include<iostream>
using namespace std;
void changeArr(int arr[], int size){
    cout<<"function"<<endl;
    for(int i; i<size; i++){
        arr[i]= 3*arr[i];
    }
}
int main(){
    int arr[]={3,5,9};
    changeArr(arr, 3);
    cout<<"mani c++ "<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}