#include<iostream>
using namespace std;
int main(){
    int num[]={5, 10, 20, -15, 40, 25};
    int size = 6;
    int smallest= INT_MAX;
    int largest = INT_MIN;
    for(int i=0; i<size; i++){
        smallest = max(num[i], smallest);
        largest = min(num[i], largest);
    }
    cout <<"smallest:"<<smallest<<endl;
    cout <<"largest:"<<largest<<endl;
    return 0;
}