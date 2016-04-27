/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 7, 2015, 12:14 PM
 * Purpose: Eventually to play a game of craps
 */

//System Library
#include<iostream>//I/O
#include<iomanip>
#include<cstdlib>//Random
#include<ctime>  //Time
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char,unsigned char);

void plyCrap(unsigned int,unsigned int &,
             unsigned int &,unsigned int &);

void display(unsigned int,unsigned int ,
             unsigned int ,unsigned int ,
             unsigned int );

int main(int argc, char** argv) {
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int nGames=36000;
    unsigned int win=0,lose=0,plyAgn=0;
    unsigned chkSum=0;
  
    //Play the game
    plyCrap(nGames,win,lose,plyAgn);
            
    //calculate the total of all the fames as a check
    chkSum=win+lose;
    
    //Display the results
    display(nGames,win,lose,plyAgn,chkSum);
    
    //Exit stage right!
    return 0;
}
/*********************************************************************
 **************************Display***************************************
 * Purpose:To play the game of craps
 * Input
 *      nGames-> Number of sides to the dice
 * Output
 *      win ->Number of wins
 *      lose->Number of loses
 *      plyAgn->Number of times we rolled more than 
 * *******************************************************************
 */
void display(unsigned int nGames,unsigned int win,
             unsigned int lose,unsigned int plyAgn,
             unsigned int chkSum){
    
    cout<<"Out of  "<<nGames<<" we win "<<setw(5)<<win<<" times"<<endl;
    cout<<"Out of  "<<nGames<<" we lose "<<setw(5)<<lose<<" times"<<endl;
    cout<<"Out of  "<<nGames<<" we roll again "<<setw(5)<<plyAgn<<" times"<<endl;
    cout<<"Check Sum = "<<chkSum<<endl;
}
                                  


/*********************************************************************
 **************************plyCrap***************************************
 * Purpose:To play the game of craps
 * Input
 *      nGames-> Number of sides to the dice
 * Output
 *      win
 *      lose
 *      plyAgn
 * *******************************************************************
 */
void plyCrap(unsigned int nGames,unsigned int &win,
             unsigned int &lose,unsigned int &plyAgn){
    //Play the game
    for(int game=1;game<=nGames;game++){
        
        int sum=roll(6,2);
        //Roll the dice
        switch(sum){
            case7:
            case11:win++;break;
            case2:
            case3:
            case12:lose++;break;
            default:{
            //Roll Again
            plyAgn++;
            bool rollAgn=true;
            do{
                int sum2=roll(6,2);
                if (sum==sum2){
                        win++;
                        rollAgn=false;
               }else if(sum2==7){
                    lose++;
                    rollAgn=false;
               }
            }while(rollAgn);
        }
    }
}
}
/*********************************************************************
 **************************roll***************************************
 * Inputs
 *      sides-> Number of sides to the dice
 *      nDie ->Number of dice to throw
 * Output
 *      sum  ->Sum of all dice thrown
 * *******************************************************************
 */
unsigned char roll(unsigned char sides,unsigned char nDie){
    //Declare the sum of the dice rolls
    unsigned char sum=0;
    //Loop for each die
    int thrw=0;
    while(++thrw<=nDie){
        sum+(rand()%sides+1);
    }
    for(int thrw=1;thrw<=nDie;thrw++){
        sum+=(rand()%sides+1);
    }
    return sum;
}