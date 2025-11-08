#include<iostream>

using namespace std;
int main(){
    string car[5]={"BMW","Volvo", "Fored", "Mazda", "Tesla" };
    int size = 5;
    // for(int i=0; i<size; i++){
    //     cout<<i<<" = "<<car[i]<<endl;
//}
for(string car:car){
    cout<<car<<endl;
}


    
}