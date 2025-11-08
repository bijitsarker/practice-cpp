#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
        cout<<"size = "<<vec.size()<<endl ;
        vec.push_back(25);
        vec.push_back(65);
        vec.push_back(55);
        vec.push_back(45);
        vec.push_back(35);
        cout<<"push back size = "<<vec.size()<<endl ;
    for(int i:vec){
        cout<< i<<endl;
    // for(int i='Z'; i>='A'; --i){
    //     cout<<i<<" ";
    // }
    }

    return 0;
}