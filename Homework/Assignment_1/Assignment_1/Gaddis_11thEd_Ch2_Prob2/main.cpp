/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 26, 2015, 5:11 PM
 * Purpose:  Sales Predictions
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
    float TtlSal=8.6;  //Total sales this year
    float Eastco=.58;  //East coast percent of total sales
    float EastcoG;     //East coast generated in dollar amount
 
    //Input Values Here
 
    //Process Input Here
    EastcoG=(TtlSal*Eastco);
 
    //Output Unknowns Here
     cout<<"East coast sales division will generate $"<<EastcoG<<" Million in sales."<<endl;
    
    //Exit Stage Right!
    return 0;
}