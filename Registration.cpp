#include<iostream>
#include<fstream;
using namespace std;
class Temp{
   string userName,Email, password
   ;string searchName, searchpassword;
   fstream file;
   public:
   void login();
   void signUp();
   void forgot();
}obj;  
int main(){
    char choice;
    cout<<"\n1. Login";
    cout<<"\n2. Sign-Up";
    cout<<"\n3. Forget password";
    cout<<"\n4. Exit";
    cout<<"\nEnter choice: ";
    cin>>choice;
    switch(choice){
        case '1':

        break;
        case '2':

        break;
        case '3':

        break;
        case '4':

        break;
        default:
        cout<<"Invalid selection.";
    
    }
}
void Temp::signUp(){
    cout<<"\nEnter your User Name: ";
    getline(cin,Name);
    cout<<"\nEnter your Email: ";
    getline(cin,Email);
    cout<<"\nEnter your Password: ";
    getline(cin,password);

    file.open("loginData.txt",ios::out|ios::app);
    file<<userName<<"*"<<Email<<"*"<<password<<endl;
    file.close(); 
}

void Temp::login(){
    
    cout<<"\n...........Login.........endl";
   
    cout<<"\nEnter your Name: ";
    getline(cin,searchName);
    cout<<"\nEnter your Password: ";
   getline(cin,searcpassword);

    file.open("loginData.txt", ios :: out | ios :: app);
    getline(file,userName,"\n");
    getline(file,Email,"\n");
    getline(file,password,"\n");
    while(!file.eof()){
        if(searchName==userName){
            if(searchpassword==password){
                cout<<"\nAccount Login successfull.....!"
                cout<<"\nuserName:"<<userName<<endl;
                cout<<"\nEmail:"<<Email<<endl;
            }
            else{
                cout<<"\npassword is incurrent...."
            }
        }
    getline(file,userName,"\n");
    getline(file,Email,"\n");
    getline(file,password,"\n");
    }//while
    file.close();
}
void Temp::forgot(){
     cout<<"\nEnter your User Name: ";
    getline(cin,searchName);
    cout<<"\nEnter your Email: ";
    getline(cin,searchpassword);
    file.open("loginData.txt",ios::in)
    
    getline(file,userName,"\n");
    getline(file,Email,"\n");
    getline(file,password,"\n");
}