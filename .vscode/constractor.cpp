#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y,int z){
        brand = x;
        model = y;
        year = z;

    }
};
int main(){
    Car c1("BMW", "X5", 1923);
    cout<<c1.brand<<" "<<c1.model<<" "<<c1.year;


}