/*
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 27, 2015, 5:40 PM
 * Purpose: To calculate the Restaurant Bill
 */
 
//System Libraries
#include <iostream>  //File I/O
using namespace std; //std namespace -> iostream
 
//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float Meal= 88.67; //Meal Price
    float Tax= .0675;  //Total Tax
    float Tip= .2;     //Tip percentage
    float total;       //Total bill
    float TtlTax;      //Total Tax amount
    float TtlTip;      //Total tip amount
    float Mtax;
    //Input Values Here
 
    //Process Input Here 
    TtlTax=(Meal*Tax);
    Mtax=(Meal+TtlTax);
    TtlTip=(Mtax*Tip);
    total=(TtlTip+Mtax);
    
 
    //Output Unknowns Here
    cout<<"The Meal cost = $"<<Meal<<endl;
    cout<<"The tax amount = $"<<TtlTax<<endl;
    cout<<"The tip amount = $"<<TtlTip<<endl;
    cout<<"The total bill = $"<<total<<endl;
    //Exit Stage Right!
    return 0;
}