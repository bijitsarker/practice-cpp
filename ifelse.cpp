#include <iostream>
using namespace std;
int main(){
    int a;
    cout <<"enter a:";
    cin >> a;
    if(a<30){
        cout <<"a is small nambers";
    }
    else if(a>50 && a<60){
        cout <<"a is meddil numbers";

    }
    else{
       cout <<" a is largest numbers";
    }
    return 0;
}