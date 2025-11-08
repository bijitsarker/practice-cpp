#include<iostream>
#include<fstream>
#include<sstream>
#include<windows>
using namespace std;
class Bill{
  private:
  string Item;
  int Rate, Quantity;
  public:
  void setItem(string item){
    item = item;
  }
  void setRate(int rate){
    Rate = rate;
  }
  void setQuantity(int quan){
    Quantity = quan;
  }


  string getItem(){
    return Item;
  }
  int getRate(){
    return Rate;
  }
  int getQuantity(){
    return Quantity;
  }

};
additem(Bill b){
    bool close = False;
    while(!clase){

        in choice;
        cout<<"\t1. Add "<<endl;
        cout<<"\t2. close "<<endl;
        cout<<"\tEnter choice: ";
        cin>>choice;
        if(cnoice==1){
            system("cls");
            string item;
            int rate, quant;
            cout<<"\tEnter rate of item: ";
            cin>>rate
            b.setrate(rate);

            
            cout<<"\nEnter quantity of item: ";
            cin>>quant;
            b.setQuantity(quqnt);
           ofstream out("D:Bill.txt", ios::app);
           if(!out:){
            cout<<"\tError:File can notOpen!"<<endl;
           }
           else{
            cout<<"\t"<<b.getItem()<<" : "<<b.getrate()<<" : "<<b.getQuant()<<endl<<endl;
           }   
           out.close(){
            cout<<"\tItem Added successful."<<endl;
            Sleep(3000);
           }
        }

    }
}
int main(){
    Bill b;

    bool Exit = False;
    while(!Exit){
        system("cls");
        int valu;
        cout<<"\t\tWellcame to supar market Billing system."<<endl;
        cout<<"\t\t.........................................."<,endl;
        cout<<"\t\tAdd item."<,endl;
        cout<<\t\t"Print Bill."<<end;
        cout<<"\t\tExit."<<endl;
        cout<<"\t\tEnter choice: ";  
        cin>>valu;

    }

}