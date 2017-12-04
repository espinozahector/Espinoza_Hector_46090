/* 
 * File:   main.cpp
 * Author: Hector Espinzoa
 * Created on July 1, 2015, 11:04 PM
 * Purpose: Monthly Payments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

/* //User Libraries
 * 
 * //Global constants
 * 
 * //Function Prototypes
 * 
 * //Execution Begins Here!
 */
using namespace std;

int main(int argc, char** argv) {
   
    //Declare Variables
unsigned char nMonths=36;    //Number of months to payoff loan
unsigned short loan=10000;   //Loan amount in dollars
float ir=0.01f;              //Interest Rate per month
float mnthPay;               //Monthly Payment in dollars
float temp=1.0f;             //Intermediate value found in monthly payment
float cstLoan;               //Cost of the loan in dollars
float totCost;               //Total Paid back to lender

//Calculate the intermediate value
float onePlsi=(1+ir);
for(int months=1;months<=nMonths;months++){
    temp*=onePlsi;
}

//Calculate the monthly payment 
mnthPay=ir*temp*loan/(temp-1);
int imnthPay=mnthPay*100;
mnthPay=imnthPay/100.0f;       //Exact amount in pennies
totCost=nMonths*mnthPay;
cstLoan=totCost-loan;

//Output the results
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout<<"Loan Amount:                  $"<<setw(8)<<loan*1.0f<<endl;
cout<<"Monthly Interest Rate:         "<<setw(8)<<ir*100<<"%"<<endl;
cout<<"Number Of Payments:            "<<setw(8)<<static_cast<int>(nMonths)<<endl;
cout<<"Monthly Payments:             $"<<setw(8)<<mnthPay<<endl;
cout<<"Amount Paid Back:             $"<<setw(8)<<totCost<<endl;
cout<<"Interest Paid:                $"<<setw(8)<<cstLoan<<endl;

//Exit Stage Right!
    return 0;
}