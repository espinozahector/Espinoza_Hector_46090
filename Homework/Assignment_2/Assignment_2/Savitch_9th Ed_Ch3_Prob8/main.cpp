/* 
 * File:   main.cpp
 * Author: Hector Espinzoa
 * Created on July 1, 2015, 12:29 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/* //User Libraries
 * 
 * //Global constants
 */ const float PI=4*atan(1);
      
 /* //Function Prototypes
 * 
 * //Execution Begins Here!
 */
int main(int argc, char** argv) {
    //Declare and initialize variables
    int nTerms=200000;
    float apprxPI=1;
    
    //Now calculate PI with a for-loop
    for(int i=3,nTerm=1;nTerm<=nTerms;i+=4,nTerms+=2){
        apprxPI+=(-1.0f/i+1.0f/(i+2));
    }
    apprxPI*=4;
    
    //Output the results and compare
    cout<<fixed<<showpoint<<setprecision(15);
    cout<<"Exact Value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<apprxPI<<endl;
    
    return 0;
}

