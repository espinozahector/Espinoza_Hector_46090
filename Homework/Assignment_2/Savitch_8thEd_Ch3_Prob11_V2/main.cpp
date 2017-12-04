/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 2, 2015, 12:40 PM;
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
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
    //Declare our variables
    float x=2.0f;   //The x in e^x
    float ex=1.0f;  //First term in the exponential sequence
    float delt=1.0f;//Incremental value of each term in the sequence
    float tol=1e-7; //Determine the accuracy for the approximation 
    
    //Utilize a for loop to calculate e^x
    for(int term=1;delt<-tol||delt>tol;term++){
        delt*=x/term;
        ex+=delt;
}
    //output the results
    cout<<fixed<<showpoint<<setprecision(15)<<endl;
    cout<<"Exact  e("<<x<<")="<<exp(x)<<endl;
    cout<<"Approx e("<<x<<")="<<ex<<endl;
    
    //Exit stage right
    return 0;
}