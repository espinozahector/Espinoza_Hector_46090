/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 21, 2015, 12:43 PM
 * Purpose: The game 21
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

void Display();                                     //Displays the rules of the game
void printCards(vector<unsigned short>);            //Prints cards 4 of each
void shuffle(vector<unsigned short>&,int);          //Shuffles the cards    
unsigned short drawCard(vector<unsigned short>&);   //Draws one card at a time from the bottom of the deck
void showHand(vector<unsigned short> , string);     //Shows the players hand
void comp1(vector<unsigned short>);                 //Computers hand of cards
unsigned short total(vector<unsigned short>);                    //Total of the players card
void compare(vector<unsigned short> ,vector<unsigned short> );   //Compares the computer and the users cards to determine the winner
    
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    char choice;                                    //Choice to draw another card or not
    const int SIZE=52;                              //Size of the array
    vector<unsigned short> cards;                   //Vector for the cards 
    vector<unsigned short> hand1;
    vector<unsigned short> comp;
    
    //Vector for the players hand to store what cards he has
    srand(static_cast<unsigned int>(time(0)));      
    for(int i=0; i<SIZE; i++){
        cards.push_back (i%13+1);   
    }
    printCards(cards);
    shuffle(cards,SIZE);
    printCards(cards);
    for(int l=1;l<25;l++){
        cout<<endl;
    }
    Display();
    
    //Draws the players cards
    hand1.push_back(drawCard(cards));
    hand1.push_back(drawCard(cards));
    comp.push_back(drawCard(cards));
    comp.push_back(drawCard(cards));
//    showHand(comp,"Computer");
    showHand(hand1,"Player 1");
        do{
        cout<<"Would you like to draw another card?(Yes='Y,No='N')"<<endl;
        cin>>choice;
        
        if (choice=='Y'||choice=='y'){
            hand1.push_back(drawCard(cards));
            if(total(comp)<17){
                comp.push_back(drawCard(cards));
            }
            showHand(hand1,"Player 1");
        }
        cout<<endl;
        
    }while(choice=='Y'||choice=='y');
    for(int i = 0; i < comp.size(); ++i)
    do{
         if(total(comp)<17){
                comp.push_back(drawCard(cards));
            }
    }while(total(comp)<17);
           
    compare(hand1,comp);
    cout<<"Your total "<<total(hand1)<<"\n";
    cout<<"Computer's total "<<total(comp)<<"\n";
    showHand(comp,"Computer");

    //Exit stage right!
    return 0;
}
unsigned short total(vector<unsigned short>cards){
    unsigned short sum=0;
    unsigned int ace;
    for(int i=0;i<cards.size();i++){
         if(cards[i]==2){
            sum+=2;
        }else if(cards[i]==3){
            sum+=3;
        }else if(cards[i]==4){
            sum+=4;
        }else if(cards[i]==5){
            sum+=5;
        }else if(cards[i]==6){
            sum+=6;
        }else if(cards[i]==7){
            sum+=7;
        }else if(cards[i]==8){
            sum+=8;
        }else if(cards[i]==9){
            sum+=9;
        }else if(cards[i]==10){
            sum+=10;
        }else if(cards[i]==11){
            sum+=10;
        }else if(cards[i]==12){
            sum+=10;
        }else if(cards[i]==13){
            sum+=10;
        }else if(cards[i]==1){
            if(sum<10){
                sum+=11;
            }
            if(sum>21){
                sum+=1;
            }
        }
    }
    return sum;
}

void showHand(vector<unsigned short> v, string name){
    cout<<name<<"'s hand\n";
    for(int i=0; i<v.size(); i++){
        if(v[i]==13){
            cout<<"K ";
        }else if(v[i]==12){
            cout<<"Q ";
        }else if(v[i]==11){
            cout<<"J ";
        }else if(v[i]==1){
            cout<<"A ";    
        }else cout<<v[i]<<" ";    
    }
    cout<<"\n";
}
 void compare(vector<unsigned short> p,vector<unsigned short> c){
    if(total(p)>total(c) && total(p)<=21){
        cout<<"You Win!!!!"<<endl;
    }
    else if(total(p)==21 && total(p)<=21){
         cout<<"You Win!!!"<<endl;
    }
    else if(total(p)<=21 && total(c)>21){
        cout<<"You win!!!"<<endl;
    }
    else{
        cout<<"You Lose!!!"<<endl;
    }

}
void printCards(vector<unsigned short> v){
    for(int i=0; i<v.size(); i++){
        if(i%13==0)cout<<"\n";
        cout<<setw(2)<<v[i]<<" ";
    }
    cout<<endl;
}

void shuffle(vector<unsigned short> &v,int s){
    for(int i=0 ; i< s*3 ; i++){
        int pos1 = rand()%s;
        int pos2 = rand()%s;
        unsigned short temp = v[pos1];
        v[pos1]=v[pos2];
        v[pos2]=temp;
    }
}
unsigned short drawCard(vector<unsigned short> &c){
    unsigned short temp=c[c.size()-1];
    // deal the fist card, temp = c[0]
    // swap the first and last card, swap(c[0],c[c.size()-1)
    //c.pop_back()
    c.pop_back();
    return temp;
}
void Display(){
    cout<<"Welcome to the game of 21, based on the popular card game."<<endl;
    cout<<"How to play: The objective of the game is to get the highest total without exceeding 21."<<endl;
    cout<<"Each player has an independent game against the dealer and the objective is to beat the dealer."<<endl;
    cout<<"If the players hand total is higher then 21, it is called a bust, and the dealer wins."<<endl;
    cout<<"Even if both the player and the dealer have a bust as well."<<endl;
    cout<<"A 21 hand is calculated as follows: Cards of 2-10 are worth their face value."<<endl;
    cout<<"Jack, Queen, King are also worth 10 each."<<endl;
    cout<<"The Ace card is worth 11 unless it causes the player to bust his hand, which in this case the Ace can be counted as a 1."<<endl;
    cout<<"A two cards hand with the ace and a 10 value is called blackjack and it is a winning hand,"<<endl;
    cout<<"unless the dealer has an Ace and a 10 value, in this case is a bust."<<endl;
    cout<<endl;
}