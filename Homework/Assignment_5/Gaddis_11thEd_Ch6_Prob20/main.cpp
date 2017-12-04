/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 12, 2015, 1:28 AM
 * Purpose: Stock Profit
 */

#include <iostream>
using namespace std;
//User Libraries
 
//Global Constants

// Function Prototypes

float profit(int NS,float SP,float SC,float PP,float PC);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
   int NS;   // Number of share
   float SP;   // Selling Price
   float SC;   // Sales commission paid
   float PP;   // Purchase Price
   float PC;   // Purchase commission paid

   // Input the number of shares
   cout<<"How many shares are you selling?"<<endl;
   cin>>NS;
   while (NS<1){
      cout<<"You must sell at least one share"<<endl;
      cout<<"How many shares are you selling?"<<endl;
      cin>>NS;
   }

   // Input Sales Price
   cout<<"How much are you selling the stock for?"<<endl;
   cin>>SP;
   while (SP<=0.0){
      cout<<"Amount must be greater than 0.00 USD"<<endl;
      cout<<"How much are you selling the stock for?"<<endl;
      cin>>SP; 
   }

   // Input Sales commission
   cout<<"How much must you pay the broker?"<<endl;
   cin>>SC;
   while (SC<=0.0){
       cout<<"Amount must be greater than 0.00 USD"<<endl;
      cout<<"How much must you pay the broker?"<<endl;
      cin>>SC; 
   }

   // Input Purchase price
   cout<<"How much did you initially buy the share for?"<<endl;
   cin>>PP;
   while (PP<=0.0){
       cout<<"Amount must be greater than 0.00 USD"<<endl;
      cout<<"How much did you initially buy the share for?"<<endl;
      cin>>PP; 
   }

   // Input Purchase commission
   cout<<"How much did you initially pay the broker?"<<endl;
   cin>>PC;
   while (PC<=0.0){
       cout<<"Amount must be greater than 0.00 USD"<<endl;
      cout<<"How much did you initially pay the broker?"<<endl;
      cin>>PC; 
   }
   cout<<"Total profit is "<<profit(NS,SP,SC,PP,PC);

   return 0;
}

float profit(int NS,float SP,float SC,float PP,float PC)
{
   float result;

   result=(((float)NS*SP)-SC)-(((float)NS*PP)+PC);
   return result;
}