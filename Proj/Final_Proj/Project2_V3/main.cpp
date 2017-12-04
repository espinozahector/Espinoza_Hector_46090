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
#include <fstream>
using namespace std;

//User Libraries
#include "char.h"

//Global Constants

const int COLS=2;
//Function Prototypes

void Display();                                                     //Displays the rules of the game
void clear();                                                       //Clears the screen for the new game
void printCards(vector<unsigned short>);                            //Prints cards 4 of each
void shuffle(vector<unsigned short>&,int);                          //Shuffles the cards            
void showHand(vector<unsigned short> , string);                     //Shows the players hand
void comp1(vector<unsigned short>);                                 //Computers hand of cards
void compare1(vector<unsigned short> ,vector<unsigned short> );     //Compares the computer and the users cards to determine the winner
void compare2(vector<unsigned short> ,vector<unsigned short> );     //Compares the player and the users cards to determine the winner
unsigned short total(vector<unsigned short>);                       //Total of the players card
unsigned short drawCard(vector<unsigned short>&);                   //Draws one card at a time from the bottom of the deck                                  
void  printStat(int[][COLS],int);                                   //Prints the stats for the player vs. player games

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=52;                               //Size of the array
    choices c;                                       //The choices in the structure    
    vector <unsigned short> cards;                   //Vector for the cards 
    vector <unsigned short> hand1;                   //Holds player 1's
    vector <unsigned short> hand2;                   //Holds player 2's hand
    vector <unsigned short> comp;                    //Holds the computers hand cards
    int stats[10][COLS];
    int gameNum=0;
  
    //Vector for the players hand to store what cards he has
    srand(static_cast<unsigned int>(time(0)));      
    for(int i=0; i<SIZE; i++){
        cards.push_back (i%13+1);   
    }  
     
    Display();
    printCards(cards);
    shuffle(cards,SIZE);
    printCards(cards);
    //Ask the user if they want to play player vs. player or computer
    cout<<"Do you want to play Player vs. Player?(Y=Yes,N=No) if not then Player vs. Computer: ";
    cin>>c.pvp;
   
    do{ 
        clear();
    if(c.pvp=='Y'||c.pvp=='y'){
   //Draws two cards
    cout<<"Player 1: ";
    hand1.push_back(drawCard(cards));
    hand1.push_back(drawCard(cards));
    
    showHand(hand1,"Player 1");
    cout<<"Your hand total is "<<total(hand1)<<endl;
        while(true){
            if(total(hand1)>21){
                cout<<"You busted"<<endl;
                break;
            }
            cout<<"Would you like to draw another card?(Yes='Y',No='N') ";
            cin>>c.choice;

            if (c.choice=='Y'||c.choice=='y'){
                hand1.push_back(drawCard(cards));
                showHand(hand1,"Player 1");
                cout<<"Your hand total is "<<total(hand1);
            }else{
                break;
            }
            cout<<endl;  
        }
    clear();
    cout<<"Player 2: ";
    //Draw two cards
    hand2.push_back(drawCard(cards));
    hand2.push_back(drawCard(cards));
    //Shows the players hand
    showHand(hand2,"Player 2");
    cout<<"Your hand total is "<<total(hand2)<<endl;
        while(true){
            if(total(hand1)>21){
                cout<<"You busted"<<endl;
                break;
            }
        cout<<"Would you like to draw another card?(Yes='Y',No='N') ";
        cin>>c.choice;
        
        if (c.choice=='Y'||c.choice=='y'){
            hand2.push_back(drawCard(cards));
            showHand(hand2,"Player 2");
            cout<<"Your hand total is "<<total(hand2);
        }else{
            break;
        }
        cout<<endl;
        }
    compare2(hand1,hand2);
    cout<<endl;
    cout<<"Player 1's total: "<<total(hand1)<<endl;
    showHand(hand1,"Player 1");
    cout<<"Player 2's total: "<<total(hand2)<<endl;
    showHand(hand2,"Player 2");
    cout<<endl;
    //Keeps track of the players scores
    stats[gameNum][0]=total(hand1);
    stats[gameNum][1]=total(hand2);
    gameNum++;
    
    }else{
    //Plays computer vs. Player
    //Draws the players cards
    hand1.push_back(drawCard(cards));
    hand1.push_back(drawCard(cards));
    //Draws the computers cards
    comp.push_back(drawCard(cards));
    comp.push_back(drawCard(cards));
    //Shows the players cards
    showHand(hand1,"Player 1");
    cout<<"Your hand total is "<<total(hand1)<<endl;
        do{
            if(total(hand1)>21){
                cout<<"You busted"<<endl;
                break;
            }
        cout<<"Would you like to draw another card?(Yes='Y',No='N') ";
        cin>>c.choice;
        //Used to draw the players cards and the computers card
        if (c.choice=='Y'||c.choice=='y'){
            hand1.push_back(drawCard(cards));
            if(total(comp)<17){
                comp.push_back(drawCard(cards));
            }
            showHand(hand1,"Player 1");
            cout<<"Your hand total is "<<total(hand1);
        }
        cout<<endl;
    //Used to for-loop until the computer no longer needs cards
    }while(c.choice=='Y'||c.choice=='y');
    for(int i = 0; i < comp.size(); ++i)
    do{
         if(total(comp)<17){
                comp.push_back(drawCard(cards));
            }
    }while(total(comp)<17);
           
    compare1(hand1,comp);
    cout<<"Your total "<<total(hand1)<<"\n";
            
    cout<<"Computer's total "<<total(comp)<<"\n";
    showHand(comp,"Computer");
    cout<<endl;
    }
    //Ask the user if he/she wants to play again
    cout<<"Do you want to play again?(Y/N) ";
    cin>>c.answ;
    for(int i=0;i<hand1.size();i++){
        vector<unsigned short>::iterator it;
        it=cards.begin();
        cards.insert(it,hand1[i]);
    }
    hand1.clear();
    
    for(int i=0;i<hand2.size();i++){
        vector<unsigned short>::iterator it;
        it=cards.begin();
        cards.insert(it,hand2[i]);
    }
    hand2.clear();
    for(int i=0;i<comp.size();i++){
        vector<unsigned short>::iterator it;
        it=cards.begin();
        cards.insert(it,comp[i]);
    }
    comp.clear();
}while(c.answ=='Y'||c.answ=='y');
    clear();
    printStat(stats,gameNum);
    //Exit Stage Right!
    return 0;
}
/*****************************************************************
 *                      PrintStat
 * ****************************************************************
 * Purpose:Prints the stats for the player vs. player game
 * Input: 
 *      stats-> a 2 dimensinal array with row and colums. 
 *      N-> The hand for player 1 and player 2
 * Output-> 
 *      The stats for the game, what game and the hand total for both players
 */
void printStat(int stats[][COLS],int n){
    cout<<"Stats for all the games played."<<endl;
    cout<<"Game-Num    P1    P2"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(5)<<i+1<<setw(9)<<stats[i][0]<<" "<<setw(5)<<stats[i][1]<<"\n";
    }
}
/*****************************************************************
 *                      Clear
 * ****************************************************************
 * Purpose:To clear the screen for the new game
 * output: 25 endl's
 */
void clear(){
    for(int i=1;i<=50;i++){
        cout<<endl;
    }
    
}
/*****************************************************************
 *                      Total
 * ****************************************************************
 * Purpose:To calculate the total of the players card
 * Input: 
 *      vector[cards]->The cards in their hand
 * Output: 
 *      Sum->The sum of the cards
 */
unsigned short total(vector<unsigned short>cards){
    unsigned short sum=0;
    unsigned int ace;
    for(int i=0;i<cards.size();i++){
        
        if(cards[i]==1){
            if(sum<10){
                sum+=11;
            }else{
                sum+=1;
            }
        }else if(cards[i]==2){
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
        }
    }
    return sum;
}
/*****************************************************************
 *                      Showhand
 * ****************************************************************
 * Purpose:To calculate the total of the players card
 * Input: 
 *      vector[cards]->The cards in their hand
 * Output: 
 *      Sum->The sum of the cards
 */

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
/*****************************************************************
 *                      compare
 * ****************************************************************
 * Purpose: To compare player1's hand vs. the computer's hand
 * Input: 
 *      vector[p]->for player1's hand
 *      vector[c]->for the computer's hand
 * Output: 
 *      Who wins the computer or the player
 */
 void compare1(vector<unsigned short> p,vector<unsigned short> c){
    if(total(p)>total(c) && total(p)<=21){
        cout<<"You Win!!!!"<<endl;
    }
    else if(total(p)==21 && total(c)==21){
        cout<<"You lose"<<endl;
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
 /*****************************************************************
 *                      compare2
 * ****************************************************************
 * Purpose: To compare player1's hand vs. player2's hand
 * Input: 
 *      vector[p1]->for player1's hand
 *      vector[p2]->for player2's hand
 * Output: 
 *      Who wins player1 or the player2
 */
  void compare2(vector<unsigned short> p1,vector<unsigned short> p2){
    if(total(p1)>total(p2) && total(p1)<=21){
        cout<<"Player 1 Wins!!"<<endl;
        
    }else if(total(p2)>total(p1) && total(p2)<=21){
        cout<<"Player 2 Wins!!"<<endl;
        
    }else if(total(p1)<=21 && total(p2)>21){
        cout<<"Player 1 Wins!!!"<<endl;
        
    }else if(total(p2)<=21 && total(p1)>21){
        cout<<"Player 2 Wins!!!"<<endl;
        
    }else if(total(p1)==21 && total(p2)==21){
        cout<<"Tie"<<endl;
        
    }else if(total(p2)==21 && total(p1)==21){
        cout<<"Tie"<<endl;
        
    }else if(total(p2)==total(p1)){
        cout<<"Tie"<<endl;
    }
}
 /*****************************************************************
 *                      PrintCards
 * ****************************************************************
 * Purpose: Print the deck of cards
 * Input: 
  *     vector[v]->the list of cards
 * Output: 
 *      The deck of cards
 */ 
void printCards(vector<unsigned short> v){
    for(int i=0; i<v.size(); i++){
        if(i%13==0);
    }
}
 /*****************************************************************
 *                      Shuffle
 * ****************************************************************
 * Purpose: To shuffle the deck
 * Input: 
  *     vector[&v]->A copy of the deck
  *     s-> size of the array
 * Output: 
 *      A shuffled deck
 */ 
void shuffle(vector<unsigned short> &v,int s){
    for(int i=0 ; i< s*3 ; i++){
        int pos1 = rand()%s;
        int pos2 = rand()%s;
        unsigned short temp = v[pos1];
        v[pos1]=v[pos2];
        v[pos2]=temp;
    }
}

 /*****************************************************************
 *                      drawCard
 * ****************************************************************
 * Purpose: Draws one card from the deck
 * Input: 
 *     vector[&c]->A copy of the deck
 * Output: 
 *      returns the temp card from the deck
 */ 
unsigned short drawCard(vector<unsigned short> &c){
    unsigned short temp=c[c.size()-1];
    c.pop_back();
    return temp;
}
 /*****************************************************************
 *                      Display
 * ****************************************************************
 * Purpose: Displays the rules
 * Output: 
 *      Outputs the rules to the game
 */ 
void Display(){
    //Open the file
    ifstream input("display.txt");
    string rules;
    if(input.is_open()){
        while(getline(input,rules)){
            cout<<rules<<endl;
        }
    }else{
        cout<<"ERROR: Cannot open file."<<endl;
    }
    cout<<endl;
}
