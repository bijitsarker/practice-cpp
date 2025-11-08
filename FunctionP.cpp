#include<iostream>
using namespace std;
int myFunction(int a, float b){
    return a+b;
}
double myFuntion2(double x, int y){
    return x*y;
}
int main(){
    cout<<" a + b = "<<myFunction(15.0, 5)<<endl;
    cout<<" x * y = "<<myFuntion2( 4, 5.2);
    return 0;
}