#include<iostream>
using namespace std;
// auto add = [](int a, int b){
//         return a + b;
//     };

//    int result = add(3,4);
//    cout<<result;
    
   int multiplier = 3;
auto times = [](int a) {
    return a * multiplier;
};
int main(){
int result = times(5);
cout<<result;
}