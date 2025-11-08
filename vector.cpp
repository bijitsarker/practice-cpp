#include<iostream>
#include<vector>
using namespace std;
int main(){
  // vector<string>cars = {"Volvo", "BMW", "Ford", "Mazda"};
 
  // for(string car : cars){
  //   cout<<car<<endl;
  //    cout<<car<<endl;
  // }
  vector<int>vec = {1,2,3,4,5};
  // vec.erase(vec.begin()+);
  //vec.clear();
  
  vector<int> :: iterator it;
  for(it = vec.begin(); it != vec.end(); it++){
    cout<<*(it)<<endl;
  }
    return 0;
}