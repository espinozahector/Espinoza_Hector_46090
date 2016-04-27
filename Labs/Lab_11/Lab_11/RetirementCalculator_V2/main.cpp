/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 8, 2015, 10:45 AM
 * Purpose: Retirement Calculator
 */

//System Library
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Library

//Global Constants

//Function Prototypes

void heading(unsigned int, 
             unsigned int ,unsigned int ,
             unsigned int ,unsigned int );

void table(float&, float&, float&, float&);

void retirement(float,float,float, float, 
                float,float,float);     
                
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float salary=100000;    //Average Salary in $'s
    float invRate=0.05f;    //Investment Rate -> see Calif Muni Bonds
    float saveReq;          //Savings required at Retirement
    float pDep=0.10f;       //Of Your Gross Salary -> Percentage Deposited
    float deposit;        //Yearly Deposit in $'s
    float savings=0;        //Initial Savings at start of Employment
    float year=0;           //Start at year 0   
    string strtdt="06/01/"; //
    float yr,save,intr,depo;
    
    //Display the heading 
    heading(yr,save,intr,depo,salary);
   
    //Calculate the retirement 
    retirement(salary,invRate,saveReq,pDep,deposit,savings,year);
    
    //Table
    
    
    //Exit Stage Right!

    return 0;  
}

//*****************************************************************
void heading(unsigned int yr, 
             unsigned int save,unsigned int intr,
             unsigned int depo, unsigned int salary){
    
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Year   Date   Save   Interest   Deposit"<<endl;
}

//***********************************************************************

void retirement(float salary,float invRate, 
                float saveReq,float pDep, 
                float deposit,float savings, 
                float year){
    
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
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"I can Retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
}
