#include <iostream>
using namespace std;
int main(){
    int myint;
    float myfloat;
    double mydouble;
    char mychar;
    bool mybool;

    cout <<sizeof(myint)<<"\n";     // 4 bytes
    cout <<sizeof(myfloat)<<"\n";     //4 bytes
    cout <<sizeof(mydouble)<<"\n";   //8 bytes
    cout <<sizeof(mychar)<<"\n";     //1 bytes
    cout<<sizeof(mybool)<<"\n";       //1 byte

    return 0;
}