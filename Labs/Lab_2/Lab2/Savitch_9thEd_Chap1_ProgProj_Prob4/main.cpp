/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 23, 2015, 5:53 PM
 * Purpose: Homework, Freefall
 */
 
//System Libraries
#include <iostream> //I/O Library
 
using namespace std; //Namespace for iostream
 
//User Libraries
 
//Global Constants
const float GRAVITY=3.2174e1f; //Acceleration due to Gravity Earth(ft/sec^2)
 
//Function Prototype 
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //dstnce= The distance dropped in (ft) 
    //time=time in (secs))
    float dstnce, time;
    //Prompt the input time
    cout<<"to calculate the distance dropped"<<endl;
    cout<<"Input the time in Seconds"<<endl;
    cout<<"Time should be in floating point format\n";
    cin>>time;
    //Calculate the free-fall distance
    //dstnce=1/2*GRAVITY*time*time;//Incorrect 
    //dstnce=1.0f/2*GRAVITY*time*time;//Correct
    //dstnce=1/2.0f*GRAVITY*time*time;//Correct
    dstnce=GRAVITY*time*time/2;//Correct
    //Output the results
    cout<<"the distance traveled = ";
    cout<<dstnce<<"(ft)"<<endl;
    //Exit stage right!
    return 0;
}