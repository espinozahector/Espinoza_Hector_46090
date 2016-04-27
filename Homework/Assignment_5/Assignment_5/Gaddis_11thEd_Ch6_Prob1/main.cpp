/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 11, 2015, 4:21 PM
 * Purpose: markup
 */

//System Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries
 
//Global Constants
  
//Function Prototypes

float markcst (float,float);

//Execution Begins Here!
int main(int argc, char** argv) {

//Declare Variables
float retail, whole, markumarkupp;	


cout<<fixed<<showpoint<<setprecision(2);
cout<<"Enter the wholesale cost for the item: $";
cin >>whole;

//input the wholesale price
while (whole<0)
{
cout<<"Please enter a positive number. $"<<endl;
cin >>whole;
}
//input the markup percentage
cout<<"Now please enter its markup percentage: ";
cin >>markup;

while (markup<0)
{
cout<<"Please enter a positive number for markup: ";
cin >>markup;
}

cout<<"The retail price for the item is: "<<endl;
cout<<"$"<<markcst(whole,markup);

return 0;
}

/************************************************
******************markcst************************
 * Purpose: To calculate the price of the item with the markup
 * Input: whole, markup
 * output: the calculation for the total price
*************************************************/
float markcst (float whole,float markup){
    //convert markup percentage to two decimal point
    markup = (markup/100);  
    return (whole*markup)+whole;

}

