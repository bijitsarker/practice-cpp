#include<iostream>
#include<ctime>
using namespace std;
int main(){
    time_t settime = time(0);
    struct tm DateTime = *localtime(&settime);
    cout<<DateTime.tm_hour<<" : "<<DateTime.tm_min<<" : "<<DateTime.tm_sec;
}