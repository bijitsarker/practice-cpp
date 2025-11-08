#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
       
        vec.push_back(25);
        vec.push_back(65);
        vec.push_back(55);
        vec.push_back(45);
        vec.push_back(35);
        cout<<"push back size = "<<vec.size()<<endl ;
        vec.pop_back(); // 35 delete
        vec.pop_back(); // 55 delete
        vec.pop_back(); // 45 delete
        cout<<vec.at(0)<<endl;
    for(int i:vec){
        cout<< i<<endl;
    
   }

///--------------------------
    //  vector<string>color = {"Blue","Red","Purple"};
       // cout<<color.size<<endl
    //     cout<<color.front()<<" "<<color.back();//print blue , purple


     //---------------------
    //  vector<string>color = {"Blue","Red","Purple"};
    //  color.push_back("Green"); // add Green
    //  color.push_back("Pin");  // add Pin
    //  color.push_back("Yewllo"); // add Yewllo
    //  color.pop_back(); // delete Yewllo
    //  for(string colors : color){
    //     cout<<colors<<" ";   
    //  }

    //  cout<<endl;
    //  cout<<color.at(2)<<endl;
    //  cout<<color.empty()<<endl;
    //  cout<<color.size();

    return 0;
}