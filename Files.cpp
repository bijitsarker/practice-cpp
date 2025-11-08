#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream Myfile("student.txt");

    Myfile<<"my name is bijit, iam a student, ";

    Myfile.close();

}