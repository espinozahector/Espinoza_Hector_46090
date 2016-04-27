/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 12, 2015, 12:01 AM
 * Purpose: Overloaded Hospital
 */

//System Libraries
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
//User Libraries
 
//Global Constants

// Function Prototypes

float inCosts(int days, float rate, float service, float charge);     
float outCosts(float service, float charge);

//Execution Begins Here!
int main(int argc, char** argv){
    
       //Declare variables
       int stay;    //To decide if in patient or out patient
       float InTtl; //The total cost for an in patient
       float OutTtll;//the total cost of an out patient
       int days;     //number of days in the hospital
       float rate, service, charge;//the charge of rate, the service cost and the charge for medication
      
       //Input an inpatient or and outpatient (note:learn how to use a string for this)
       cout<<"Input a (0) for an inpatient or a (1) for an outpatient"<<endl;
       cin>>stay;

       //Verify if the input was a 0 or a 1
       while (stay !=0 && stay !=1){
              cout<<"Input a (0) for an inpatient or a (1) for an outpatient"<<endl;
              cin>>stay;
       }
      
       // Process selection
       switch(stay){
           
       case 0:      
              cout<<"Input the number of days spent at the hospital"<<endl;
              cin>>days;
              cout<<"Input the hospitals daily rate"<<endl;
              cin>>rate;
              cout<<"Please enter the charges for hospital services"<<endl;
              cin>>service;
              cout<<"Please enter the charges for medications"<<endl;
              cin>>charge;
              //Calculate the cost
              InTtl= inCosts(days, rate, service, charge);
              cout<<"The total inpatient costs is $"<<InTtl<<endl;
              break;
       case 1:
              cout<<"Please enter the charges for hospital services"<<endl;
              cin>>service;
              cout<<"Please enter the charges for medications"<<endl;
              cin>>charge;
              //Calculate the cost
              OutTtll= outCosts(service, charge);
              cout<<"The total outpatient costs is $"<<OutTtll<<endl;
              break;
       }
       return 0;
}
/***********************************************************
 ************************InCost******************************
 * Purpose: to calculate the cost for an inpatient
 * input:days, rate, service, charge
 * output: the total cost
 ************************************************************
 */
float inCosts(int days,float rate,float service,float charge)
{
       // Calculate total inpatient costs
       return (days*rate)+service+charge;
}
/***********************************************************
 ************************OutCost******************************
 * Purpose: to calculate the cost for an outpatient
 * input:service, charge
 * output: the total cost
 ************************************************************
 */

float outCosts(float service,float charge)
{
       // Calculate total inpatient costs
       return service + charge;
}
