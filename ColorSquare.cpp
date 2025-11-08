#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

enum Color{RED, GREEN, YELLOW, BLUE, PURPLE};
Color RandomColor(){
    int randomNum = rand()%5;
    return static_cast<Color>(randomNum);
}
string BgColor(Color color){

switch(color){
    case RED:
       return "Red";
    case GREEN:
       return "Green";
    case YELLOW:
       return "Yellow";
    case BLUE:
       return "Blue";
    case PURPLE:
       return "Purple";
    defualt:
       return "Unknown";
   }
}

int main(){
    //srand(time(0));
    Color targetColor = RandomColor();
    string guess;
    while(true){
        cout<<"wellcome to the color square game__________________________________________:"<<endl;
        cout<<endl;
        cout<<"||........***************************************************...........||"<<endl;
        cout<<endl;
        cout<<"guess the color of square(Red, Green,Yellow,Blue,Purple)"<<endl;
        cout<<"Enter your guess:";
        cin>>guess;
        for(int i=0;i<guess.length();i++)
        guess[i] = tolower(guess[i]);

        if(guess=="red"||guess=="green"||guess=="yellow"||guess=="blue"||guess=="purple"){
           Color userColor;
            if(guess=="red") userColor = RED;
            else if(guess=="green") userColor = GREEN;
            else if(guess == "yellow") userColor = YELLOW;
            else if(guess == "blue") userColor = BLUE;
            else if(guess == "purple") userColor = PURPLE;
            if(userColor == targetColor){
                cout<<endl;
                cout<<"Congratulation you guess the correct color."<<endl;
                break;
            }
            else{
            cout<<"Wrong guess,,,,Place try again."<<endl;
            }
        }//if
            else{
                cout<<"Invalid color.Place enter a valid color....|"<<endl;
            }
            Sleep(1000);
     
   
    }//while
    return 0;
}//main