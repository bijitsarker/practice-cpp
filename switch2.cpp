#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;
    switch(age){
        case 12:
        cout<<"you are 12 years old"<<endl;
        break;
        case 18:
        cout<<"you are 18 years old"<<endl;
        break;
        case 20:
        cout<<"you are 20 years old"<<endl;
        break;
        case 30:
        cout<<"you are 30 years old";
        break;
        default:
        cout<<"nothing";
    }
    return 0;
}
