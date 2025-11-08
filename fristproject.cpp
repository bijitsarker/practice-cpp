#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;
enum Color{RED,GREEN, YELLOW, PURPLE, BLUE};
Color RandomColor(){
    int randomNum = rand()%5;
    return static_cast<Color>(randomNum);
}
string colorstring(Color color){
switch(color){
    case RED:
    return "Red";
    case GREEN:
    return "Green";
     case YELLOW:
    return "yellow";
     case PURPLE:
    return "Purple";
     case BLUE:
    return "Blue";
    defualt:
    return "Unknown";
  }
 }
int main(){
    srand(time(0));
    Color tergetColor = RandomColor();
    string guess;
    while(true){
        system("cls");
        cout<<"Wellcome to the colored square game!"<<endl;
        cout<<"************************"<<endl;
        cout<<"Guess the color of the square(RED,GREEN, YELLOW, PURPLE, BLUE)"<<endl;
        cout<<"Enter your guess:";
        cin>>guess;
        for(int i=0; i<guess.length(); i++){
            guess[i]= tolower(guess[i]);

        }
        if(guess=="red" || guess=="green" || guess=="yellow" || guess=="blue" || guess=="purple"){
            Color userColor;
            if(guess=="red") userColor = RED;
            else if(guess=="green") userColor = GREEN;
            else if(guess=="yellow") userColor = YELLOW;
            else if(guess=="blue") userColor = BLUE;
            else if(guess=="purple") userColor = PURPLE;
            if(userColor==tergetColor){
                cout<<endl;
                cout<<"Congratulation! you guessd the corret color."<<endl;
                break;
            }
            else{
                cout<<"Wrong guess. Try again!"<<endl;
            }
        }
            else{
                cout<<"INvalid color. place enter valid color";
            }
            Sleep(2000);


            

        

    }

}