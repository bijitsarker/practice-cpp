#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int>vec ={20, 30, 45, 60, 70};
  for(int& x:vec){
    x += 10;
  }
  for(int x:vec){
    cout<<x<<" ";
  }
}