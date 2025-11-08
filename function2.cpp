#include <iostream>
using namespace std;

int mynum(int x, int y){
    return x + y;
}
double mynum(double x, double y){
    return x + y;
}
int main(){
    int mynum1 = mynum(4,6);
    double mynum2 = mynum(10,5);

    cout <<"int:"<<mynum1<<"\n";
    cout <<"double:"<<mynum2<<"\n";


    return 0;
}