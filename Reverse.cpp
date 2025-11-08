#include<iostream>
#include<string>
using namespace std;
string Rrevers_string(string str){
    //string temp_str = str;
    int index = 0;
    for(int x = str.length()-1; x>1; x--){
        str[index] = str[x];
        index++;
    }
     return str;
}

int main(){
    cout<<"Original string: w3resource"<<endl;
    cout<<"Revers string :"<<Rrevers_string("w3resource");

    return 0;
}