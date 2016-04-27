/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 8, 2015, 10:45 AM
 * Purpose: Retirement Calculator
 */

//System Library
#include <iostream>
using namespace std;

//User Library

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000; //Average Salary in $'s
    float invRate=0.05f;//Investment Rate -> see Calif Muni Bonds
    float saveReq;      //Savings required at Retirement
    float pDep=0.10f;   //Of Your Gross Salary -> Percentage Deposited
    float deposit;      //Yearly Deposit in $'s
    float savings=0;    //Initial Savings at start of Employment
    float year=0;       //Start at year 0     
    //Calculate required savings 
    saveReq=(salary/invRate);
    
    //Loop to calculate when Retirement is possible
    do{
        deposit=pDep*salary; //Deposit based on Salary
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;    //Add to deposit after earning interest
        year++;
    }while(savings<saveReq);//When we have enough to retire then exit the loop
    
    //Display the results 
    cout<<"I can Retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    
    //Exit Stage Right!
    return 0;
}