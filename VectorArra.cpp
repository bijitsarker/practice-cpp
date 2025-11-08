#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<string>car = {"BMW", "Ford", "Mazda","Vlovo"};
    // car.push_back("Tesla");
    // for(string car:car){
    //     cout<<car<<endl;
    // }
    int myNumbers[10] = {10, 20, 30, 40, 50,67,86,43,90,71};
     int getArray = sizeof(myNumbers) / sizeof(myNumbers[0]);
     cout << getArray;
    return 0;
}