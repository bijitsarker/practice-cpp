#include <iostream>
using namespace std;

template <class T>
void custom_add (T a, T b) {
    cout << "Template result = " << a + b << endl;
}

int main () {
    int   p = 1;
    int   i = 2;
    float n = 10.1;
    float e = 11.2;

    custom_add<int>(p, i);    
    custom_add(n, e);       
      
    return 0;
}