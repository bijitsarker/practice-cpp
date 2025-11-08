#include<iostream>
#include<cmath>
#include<ctime>
#include<windows.h>
using namespace std;
int main(){
   

    system("cls");
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    cout << "\n\n Display the Current Date and Time :\n";
    cout<<"_______________________________________________________________________"<<endl;
    cout<<" second_______: "<<tPtr->tm_sec<<endl;
    cout<<" mimute_______: "<<tPtr->tm_min<<endl;
    cout<<" hour_________: "<<tPtr->tm_hour<<endl;
    cout<<" day _________: "<<tPtr->tm_mday<<endl;
    cout<<" weekday______: "<<tPtr->tm_wday<<endl;
    cout<<" month________: "<<(tPtr->tm_mon)+1<<endl;
    cout<<" year_________: "<<(tPtr->tm_year)+1900<<endl;
    cout<<" date of year_: "<<tPtr->tm_yday<<endl;
    
    cout<<endl;

    cout<<"Current date  : "<<tPtr->tm_mon<<"-"<<tPtr->tm_mday<<"-"<<(tPtr->tm_year)+1900<<endl;
   
    cout<<"Current time  : "<<tPtr->tm_sec<<":"<<tPtr->tm_min<<":"<<tPtr->tm_hour;
    
    
}