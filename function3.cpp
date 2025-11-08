#include <iostream>
using namespace std;
   int number(int x, int y, int a, int b, int c, int d){
        return x + y * a - b % c * !d;
   }
   float number(float x, float y){   
       return x + y;
   }
   double number(double x, double y, double z, double a, double b, double c, double d){
       return x * y * z + a * b /c * d;
   }

int main(){
              
           int number1 = number(10,16,12,32,45,56); 
            float number2 = number(20.0,60.9);    
            double number3 = number(20,60,40,50,44,56,33);  
    cout <<"int:"<<number1<<"\n";
    cout <<"float:"<<number2<<"\n";
    cout <<"double:"<<number3<<"\n";
    return 0;
}