#include<iostream>

using namespace std;
int main(){
    // Lambda function with capture-by-value.
int infinity = 5;
auto FunN = [infinity](int a){
    return a * infinity;

};
   cout<<FunN(30);

// Lambda function with capture-by-reference.
//   int indays = 8;
//   auto updateDay = [&indays](int day){
//     indays = day;
//   };
//    updateDay(50);


// Lambda function with parameters
// auto Add = [](int a, int b){
//     return a + b * a * b + a % b / a;

// };
//    Add(30, 20);
//    return 0;

}