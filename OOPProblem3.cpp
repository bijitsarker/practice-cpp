#include<iostream>
using namespace std;
class Car{
    private:
    string carname;
    string model;
    int year;
    public:
    Car(string c, string m, int y){
        carname = c;
        model = m;
        year = y;
        }
    void setcarname(string c){
        carname = c;
    }
    void setmodel(string m){
        model = m;
    }
    void setyear(int y){
        year = y;
    }
    string getcarname(){
        return carname;
    }
    string getmodel(){
        return model;
    }
    int getyear(){
        return year;
    }
};
int main(){
    Car c1("Tesla","X5", 2009 );
    cout<<"Carname = "<<c1.getcarname()<<endl;
    cout<<"Model = "<<c1.getmodel()<<endl;
    cout<<"Year = "<<c1.getyear()<<endl;
    cout<<endl;
    cout<<"Updated now____________________"<<endl;
    c1.setcarname("BMW");
    c1.setmodel("X7");
    c1.setyear(2019);
    cout<<"Updated carname = "<<c1.getcarname()<<endl;
    cout<<"updated model = "<<c1.getmodel()<<endl;
    cout<<"Updated year = "<<c1.getyear();
}