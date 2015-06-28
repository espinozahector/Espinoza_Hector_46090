/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 26, 2015, 5:45 PM
 * Purpose: To calculate the ocean levels in the next few years.
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
    float ris =1.5; //
    float fiveyr =5;
    float sevenyr = 7;
    float tenyr =10;
    float total1, total2, total3;
 
    //Input Values Here
 
    //Process Input Here
    total1=(ris*fiveyr);
    total2=(ris*sevenyr);
    total3=(ris*tenyr);
            
    //Output Unknowns Here
    cout<<"In 5 years the ocean level will be "<<total1<<" milimeters higher than the current level."<<endl;
    cout<<"In 7 years the ocean level will be "<<total2<<" milimeters higher than the current level."<<endl;
    cout<<"In 10 years the ocean level will be "<<total3<<" milimeters higher than the current level."<<endl;
    
    //Exit Stage Right!
    
    return 0;
}