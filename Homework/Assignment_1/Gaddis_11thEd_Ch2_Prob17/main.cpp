/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 26, 2015, 6:04 PM
 * Purpose: 
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
    float shares= 750;
    float shrPri= 35;
    float comm= .02;
    float gross,TtlComm,Total;
  
    //Input Values Here
 
    //Process Input Here
    gross=(shares*shrPri);
    TtlComm=(gross*comm);
    Total=(gross+TtlComm);
 
    //Output Unknowns Here
    cout<<"The total amount paid without Commission is $"<<gross<<endl;
    cout<<"The total Commission is $"<<TtlComm<<endl;
    cout<<"The total amount paid is $"<<Total<<endl;
    
    
    //Exit Stage Right!
    return 0;
}