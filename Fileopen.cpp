#include <iostream>
#include<fstream>
using namespace std;
int main(){
   ofstream file;
   file . open("student.txt");
   file<<"iam a student, iam 17 years old, iam from sylhet.";// save the student.txt
   file.close();

   
}