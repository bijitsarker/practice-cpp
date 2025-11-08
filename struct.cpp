#include <iostream>
using namespace std;
int main(){
    struct{
        string brand;
        string model;
        int year;
    } myCar1, myCar2;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = "1999";

     myCar2.brand = "ford";
    myCar2.model = "X2S";
    myCar2.year = "1990";




    return 0;
}