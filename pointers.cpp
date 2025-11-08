#include <iostream>
using namespace std;
int main(){
    string food = "pizza";
    string *ptr = (&food);

    cout <<food<<"\n\t";
    cout <<&food<<"\n\t\t";
    cout <<*ptr<<"\n\t\t\t";
    cout <<ptr<<"\n\t\t\t\t";

    *ptr = "Humburger";
    cout << *ptr<<"\n\t\t\t\t\t";
    cout <<food<<"\n\t\t\t\t\t\t";
    return 0;
}