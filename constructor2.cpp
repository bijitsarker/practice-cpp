#include<iostream>
using namespace std;
// class student{ 
//     private:
//     int password;

//     public:
//     string name;
//     int roll;
//     string subject;

//     void studentInf(string name, int roll, string subject, int password){
//        this-> name = name;
//         this->name = roll;
//         this->subject = subject;
//        this->password = password;

//     }
//     void inf(){
//         cout<<"Name:"<<name<<endl<<"Roll:"<<roll<<endl<<"Subject:"<<subject<<endl;

//     }


// };
// int main(){
//     student s1;
//     s1.name = "Bijit";
//     s1.roll = 46;
//     s1.subject =" physics";
//     s1.inf();
    
// }

class student{
    public:
    string name;
    double cgpa;
    //double* cgpaPtr; //add pointerin cgpa

    student(string name, double cgpa){
        this->name = name;
        this->cgpa =cgpa; 
        //cgpaPtr = new double;
        //*cgpaPtr = cgpa;
    }
    student(student &obj){   //copy constructor
        this->name = obj.name; 
        this->cgpa = obj.cgpa; 
        //this->cgpaPtr = obj.cgpaPtr; 
    }
        void inf(){
            cout<<"name:"<<name<<endl;
            cout<<"cgpa:"<<cgpa<<endl;
        }

};
int main(){
    student obj1("Bijit", 3.98);


    student obj2(obj1); //copy cnstructor
    //obj2.inf();
    obj1.inf();
    obj2.cgpa=9.34;
    obj1.inf();
}