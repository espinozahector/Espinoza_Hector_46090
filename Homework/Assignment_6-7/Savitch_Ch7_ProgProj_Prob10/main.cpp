/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework, tic-tac-toe
 * Created on July 22, 2015, 3:26 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
 
//Global Constants
 const char SIZE=9;
//Function Prototypes
void output(unsigned short []);
void display(unsigned short &,unsigned short &,unsigned short []);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short tic[SIZE]={1,2,3,4,5,6,7,8,9};
    unsigned short num, sNum;
    
    output(tic);
    
    //Prompt and input
    cout<<"To select a spot enter the number in which you wish to put an X or O\n";
    cout<<"Player 1 will be X and player 2 will be O\n";
    
    unsigned short tot=1;
    
    //Loop until board is filled
    do{
        
    cout<<"Player 1 your turn.\n";
    cin>>num;
    
    //To determine spot on the board 
    unsigned short rNum=num-1;
    tic[rNum]=63;
    
    display(num,sNum,tic);
    cout<<"Player 2 your turn.\n";
    cin>>sNum;
    
    //To determine spot on the board 
    unsigned short dNum=sNum-1;
    tic[dNum]=95;
    
    display(num,sNum,tic);
    tot++;
    
    }while(tot<5);
    
    return 0;
}

/************************************************************************
 *                              output
 ************************************************************************
 * Purpose: Displays original table
 * Input-Output:
 *      tic->tic-tac-toe board
 */

void output(unsigned short tic[]){
    for(int i=0;i<=2;i++){
        cout<<tic[i]<<" ";
    }
    cout<<endl;
     for(int i=3;i<=5;i++){
        cout<<tic[i]<<" ";
    }
    cout<<endl;
     for(int i=6;i<=8;i++){
        cout<<tic[i]<<" ";
    }
    cout<<endl;
}

/************************************************************************
 *                              display
 ************************************************************************
 * Purpose: change display board by putting an X or an O
 * Input:
 *      rNum->the spot in the array that needs to be changed to an X
 *      dNum->the spot in the array that needs to be changed to an O
 * Input-Output:
 *      tic->tic-tac-toe board with modifications
 */

void display(unsigned short &rNum,unsigned short &dNum, unsigned short tic[]){
    
    for(int i=0;i<=2;i++){
        if(tic[i]==63){
             cout<<"X ";
        }else if(tic[i]==95){
            cout<<"O ";
        }else{
            cout<<tic[i]<<" ";
        }
    }
    cout<<endl;
    
    for(int i=3;i<=5;i++){
        if(tic[i]==63){
             cout<<"X ";
        }else if(tic[i]==95){
            cout<<"O ";
        }else{
        cout<<tic[i]<<" ";
        }
    }
    cout<<endl;
    
    for(int i=6;i<=8;i++){
        if(tic[i]==63){
             cout<<"X ";
        }else if(tic[i]==95){
            cout<<"O ";
        }else{
            cout<<tic[i]<<" ";
        }
    }
    cout<<endl;
     
}