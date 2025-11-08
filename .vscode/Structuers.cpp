#include<iostream>
using namespace std;
int main(){
    struct{
        string my_name;
        double my_cgpa;
        int my_numbers;
    }  my_details, main_details;

    //frist structuers
    my_details.my_name = "Bijit sarker";
    my_details.my_cgpa = 4.36;
    my_details.my_numbers = 2003;
     //second structuers
    my_details.my_name = "XRDB";
    my_details.my_cgpa = 3.36;
    my_details.my_numbers = 2153;

    cout<<my_details.my_name<<" "<<my_details.my_name<<endl;
    cout<<my_details.my_cgpa<<" "<<my_details.my_cgpa<<endl;
    cout<<my_details.my_numbers<<" "<<my_details.my_numbers<<endl;
    return 0;
}