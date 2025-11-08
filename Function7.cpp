#include<iostream>
using namespace std;
void sumN(int a, int b){
    int sum = a + b;
    cout<<"sum: "<<sum<<endl;
}
int main(){
    sumN(20, 30);  // call the function
    sumN(30,30);
    sumN(300,30);
    sumN(130,30);
   sumN(304,40);
   sumN(30,70);




    return 0;
}