/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 24, 2015, 1:18 PM
 * Purpose: To calculate the total tax paid
 */

#include <iostream> //I/O Library

using namespace std; //Namespace for iostream


//User Libraries 
 
//Global Constants 
 
//Function Prototype 
 
//Execution begins here!
 
int main(int argc, char** argv) {
    
    //Declared Variables
    float FedTax  = .18, //Federal Tax
          CalTax  = .38, //California Excise Tax
          CalSTax = .08,  //California Sale Tax
          PriPGal = 3.69f,// Price Per Gallon
          TtlTax ,       // Total Tax Paid
          BsePri,        //Base Price
          PwitST,        //Total price minus sales tax
          TaxPGal;       // Tax Per Gallon by percentage
    
    //Calculate the Total Tax
    PwitST=(PriPGal)-(FedTax+CalTax); //Determines the Total price minus Fed and Cal taxes.
    BsePri=(PwitST)/(1+CalSTax);      //Determines the Total minus cal 8% tax
    TaxPGal=(PwitST)-(BsePri);        //Tax per gallon to the decimal point
    TaxPGal=(TaxPGal)*(100);          //Converted to percentage
    TtlTax=(FedTax+CalTax)+(CalSTax*BsePri); //Finding the total tax paid
    
    cout<<"Total Tax Paid is "<<"$"<<TtlTax<<endl;   
    cout<<"Total Percent Tax Per Gallon is "<<TaxPGal<<"%"<<endl; 
   
    //Exit Stage Right!
    return 0;
}

