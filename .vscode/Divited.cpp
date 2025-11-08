#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double divisor, divited, quotient,remider;
    cout<<"Input divited :";
    cin>>divited;
    cout<<"Input divsor :";
    cin>>divisor;
    quotient = divited/divisor;
    remider = divited%divisor;
    cout<<quotient<<remider;
}