#include<iostream>
#include<ctime>
using namespace std;
int main(){
    // time_t mytime;
    // time(&mytime);
    //
    
    // time_t t = time(NULL);
    // tm* tPtr = localtime(&t);
    // cout<<tPtr->tm_sec<<endl;
    // cout<<tPtr->tm_min<<endl;
    // cout<<tPtr->tm_hour<<endl;
time_t now = time(0);
struct tm* ptr = localtime(&now);


cout<<"Second :"<<ptr->tm_sec<<endl;
cout<<"Minute :"<<ptr->tm_min<<endl;
cout<<"Hour :"<<ptr->tm_hour<<endl;

}