#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;
    public:
    Rectangle(double len, double wid){
        length = len;
        width = wid;

    }
    double CalculateArea(){
        return length * width;
    }
    double CalculatePrimeter(){
        return 3*(length+width);
    }
    double CalculateHight(){
        return 5*4*65*(length+width);
    }
};
int main(){
    double length, width;
    cout<<"Input length of the rectangular:";
    cin>>length;
    cout<<"Input width  of the rectangula:";
    cin>>width;
    Rectangle r1(length, width);

    cout<<endl;
    cout<<"Area = "<<r1.CalculateArea()<<endl;
    cout<<"Primeter = "<<r1.CalculatePrimeter()<<endl;
    cout<<"Hight ="<<r1.CalculateHight();

}