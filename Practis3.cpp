#include <iostream>
using namespace std;
int main(){
   bool red_light{false};
   bool green_light{true};
   
   if(red_light==true){
    cout<<"Stop"<<endl;
   }
   else{
    cout<<"Go throuth"<<endl;
   }
   if(green_light){
    cout<<"The light not green."<<endl;
   }
   else{
    cout<<"Light is green."<<endl;
   }

   cout<<"sizeof:"<<sizeof(bool)<<endl;

   cout<<"red_light "<<red_light<<endl;
   cout<<"green_light "<<green_light<<endl;

   cout<<boolalpha<<endl;
   
   cout<<"red_light "<<red_light<<endl;
   cout<<"green_light "<<green_light<<endl;
    return 0;
}