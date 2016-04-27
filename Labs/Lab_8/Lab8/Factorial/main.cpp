/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 2, 2015, 12:09 PM;
 * Purpose: calculate the Factorial
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
 
int main(int argc, char** argv) {\
    //Declare our variables
    float fact=1;
    unsigned char n=6;
    
    //Loop and find the n!
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    
    //output the results
    cout<<static_cast<int>(n)<<"!="<<fact<<endl;
    
    //Exit stage right
    return 0;
}

