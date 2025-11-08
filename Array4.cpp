#include<iostream>
using namespace std;
void displayArray(int num[], int size){
    for(int i=0; i<size; i++)
    cout<<"Num:"<<num[i]<<endl;

}
int main(){

    int num[5]={10,20,30,40,50};

    displayArray(num, 5);

    return 0;
}