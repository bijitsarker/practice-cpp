
#include<iostream>
#include<vector>
using namespace std;

#include <type_traits>

int main() {
    int x = 5;
    double y = 10.5;

   
    decltype(x + y) result = x + y;

    cout << result; 

    return 0;
}