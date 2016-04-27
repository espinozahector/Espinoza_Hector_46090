/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 2, 2015, 1:23 PM;
 * Purpose: 
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
 
int main(int argc, char** argv) {
    //Declare Variables
    int nSecs;
    int yrs,mnths,weeks,days,hrs,mins,secs;
    
    //Calculate 
    secs=nSecs%60;
    nSecs/=60;
    mins=nSecs%60;
    nSecs/=60;
    hrs=nSecs%24;
    nSecs/=60;
    days=nSecs%7;
    nSecs/=7;
    weeks=nSecs%4;
    nSecs/=4;
    mnths=nSecs%12;
    yrs=nSecs/12;
    
    //Output the results
    cout<<"The number of years  ="<<yrs<<endl;
    cout<<"The number of months"
            " ="<<mnths<<endl;
    
    
    
    
    

    return 0;
}

