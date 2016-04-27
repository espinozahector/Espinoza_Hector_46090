//Need to do
//1. Find the total of both the player and the computer 
//2. Revalue the 11,12,13 to equal a 10
//3. Need to revalue the ace if the player wants it to be a 1 or 11
//4. Set to where if the computer is below 17 he gets another card
//5. Compare the totals and see who the winner is
//Displays players hand twice. get rid of it
//Dont display the chart

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
using namespace std;

void Display();                                     //Displays the rules of the game
void printCards(vector<unsigned short>);            //Prints cards 4 of each
void shuffle(vector<unsigned short>&,int);          //Shuffles the cards    
unsigned short drawCard(vector<unsigned short>&);   //Draws one card at a time from the bottom of the deck
void comp1(vector<unsigned short>);                 //Computers hand of cards
void showHand(vector<unsigned short> , string);     //Shows the players hand
void hand1(vector<unsigned short>);                 //Shows players hand and ask if he would like to draw another
unsigned short totalP1();                           //Total of the players card
unsigned short totalC1();                           //Total of the computers cards
int compare(unsigned short, unsigned short);        //Compares the computer and the users cards to determine the winner
    
int main() {
    char choice;                                    //Choice to draw another card or not
    const int SIZE=52;                              //Size of the array
    vector<unsigned short> cards;                   //Vector for the cards 
    vector<unsigned short> hand1;                   //Vector for the players hand to store what cards he has
    srand(static_cast<unsigned int>(time(0)));      
    for(int i=0; i<SIZE; i++){
        cards.push_back (i%13+1);   
    }
    
    Display();
    printCards(cards);
    shuffle(cards,SIZE);
    printCards(cards);
    //Draws the players cards
    hand1.push_back(drawCard(cards));
    showHand(hand1,"Player 1");
    hand1.push_back(drawCard(cards));
    showHand(hand1,"Player 1");
        do{
        cout<<"Would you like to draw another card?(Yes='Y,No='N')"<<endl;
        cin>>choice;
        
        if (choice=='Y'||choice=='y'){
            hand1.push_back(drawCard(cards));
            showHand(hand1,"Player 1");
            }
            cout<<endl;
    }while(choice=='Y'||choice=='y');
//    totalP1(vector(cards));
    return 0;
}
//unsigned short totalP1(unsigned short cards){
//    int sumP1=0;
//    for(vector<unsigned short>cards;j=vector;++j){
//        sumP1+=j;
//    }
//    cout<<sumP1<<endl;
//}
//int compare(unsigned short totalP1, unsigned short totalC1){
//    if(totalP1>totalC1 || totalP1<=21){
//        cout<<"You Win!!!!";
//    }
//    if else(totalP1<totalC1){
//        cout<<"You Lose!!!";
//    }
//    else(totalP1==totalC1){
//        cout<<"You lose!!!";
//    }
//     
//}
void comp1(vector<unsigned short> c){
    vector<int>compCard;
    compCard.push_back(drawCard(c));
    compCard.push_back(drawCard(c));
    //Need to total score for the computer
    
    //Should i output if the computer wins? If the computer gets 21 then he automatically wins. 
//    if(totalC1<17){
//        compCard.push_back(drawCard(c));
//    }
//    if else(totalC1==21){
//        cout<<"Computer wins!!"
//    }
//    else(totalC1>21){
//        cout<<"Computer went over 21, You win!!"<<endl;
//    }
//        
//    
}
void hand1(vector<unsigned short> c){
    vector<int> yourCard;
    cout<<"Your hand is: ";
    yourCard.push_back(drawCard(c));
    yourCard.push_back(drawCard(c));
    cout<<yourCard[0]<<" "<<yourCard[1]<<endl;
}

void showHand(vector<unsigned short> v, string name){
    cout<<name<<"'s hand\n";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
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
