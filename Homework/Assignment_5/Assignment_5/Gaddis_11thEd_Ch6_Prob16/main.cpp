/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 12, 2015, 4:15 AM
 * Purpose: Population
 */

#include <iostream>
using namespace std;
//User Libraries
 
//Global Constants

// Function Prototypes
int toprojectedpop(int,int,int,int);

//Execution Begins Here!
int main(int argc, char** argv){
    // Define variables.
    int startingpop;	// Starting population.
    int birthrate;	// Birth rate.
    int deathrate;	// Death rate.
    int numyears;	// Number of years to be displayed.
    int projectedpop;	// Projected population.

    // Get inputs.
    cout<<"Enter the starting population"<<endl;	
    cin>>startingpop;

    while (startingpop<2.0){
        cout<<"ERROR! Starting population must be two or more"<<endl; 
        cin>>startingpop; 
    } 
    cout<<"Enter the annual number of births"<<endl;	
    cin>>birthrate;

    while (birthrate<0){ 
        cout<<"ERROR! Birth rate cannot be negative"<<endl;
        cin>>birthrate; 
    } 

    cout<<"Enter the annual number of deaths"<<endl;	
    cin>>deathrate;

    while (deathrate<0)	{ 
        cout<<"ERROR! Death rate cannot be negative"<<endl; 
        cin>>deathrate; 
    } 

    cout<<"Enter the number of years to display"<<endl;	// Get number of years to display.
    cin>>numyears;

    while (numyears<1){ 
        cout<<"ERROR! Number of years must be one or more"; 
        cin>>numyears; 
    } 

    // Calculate the projected population.
    birthrate=birthrate/100;
    deathrate=deathrate/100;
    projectedpop=startingpop+(startingpop*birthrate)-(startingpop*deathrate);
    startingpop=projectedpop;

    cout<<"The projected population is "<<projectedpop<<endl;
    cin.ignore();
    cin.get();

    return 0;
}

int toprojectedpop(int startingpop,int numyears, int birthrate,int deathrate){
    
    for (numyears = 1; numyears <= 1000; numyears++){
    return(int) (startingpop*(1 + birthrate)*(1 - deathrate));
    }

}
