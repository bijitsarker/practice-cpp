#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;
    if(age<18){
        cout<<"They child"<<endl;
        cout<<"They cannot vote"<<endl;
    }
    else if(age>18 && age<30){
        cout<<"Adult"<<endl;
        cout<<"They drive the car"<<endl;
    }
    else{
        cout<<"They are old"<<endl;
    }
    return 0;
}  