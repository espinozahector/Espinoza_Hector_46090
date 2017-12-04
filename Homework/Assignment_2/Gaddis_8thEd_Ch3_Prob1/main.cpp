/* 
 * File:   main.cpp
 * Author: Hector Espinzoa
 * Created on June 30, 2015, 5:01 PM
 * Purpose: Calculate how many miles a car can drive per gallon
 */

//System Libraries
#include <iostream>

using namespace std;

/* //User Libraries
 * 
 * //Global Constants
 * 
 * //Function Prototypes
 * 
 *///Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
     unsigned short Gallon, NofMil;// Number of Gallons per tank, Number of miles driven on full tank.
     unsigned short MilGal;//Miles per gallon
     
     //Input the variables 
    cout<<"Input the number of gallons of gas your car can hold."<<endl;
    cin>>Gallon;
    cout<<"Input the number of Miles it can be driven on a full tank of Gas."<<endl;
    cin>>NofMil;
    
    //Calculate the number of miles that can be driven per gallon of gas
    MilGal=(NofMil/Gallon);
    
    //Output the results
    cout<<"Number of miles that may be driven per gallon is "<<MilGal<<endl;
    
    return 0;
}

