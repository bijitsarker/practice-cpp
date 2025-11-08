#include<iostream>
using namespace std;
int main(){
    
    double ang1, ang2, ang3;
    cout<<"\n\n Find the third angle of triangle..."<<endl;
    cout<<"______________________________________________"<<endl<<endl;
    cout<<"Input the angle of triangle ang1 : ";
    cin>>ang1;
    cout<<"Input the angle of triangle ang2 : "; 
    cin>>ang2;
    ang3 = 180 - (ang1 + ang2);
    cout<<"The third of triangle is :"<<ang3<<endl;
    
    
}