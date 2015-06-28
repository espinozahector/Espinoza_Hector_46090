/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 26, 2015, 5:55 PM
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
    float Tank =20;
    float mpgtwn =23.5;
    float mpghwy =28.9;
    float dist1;
    float dist2;
    //Input Values Here
 
    //Process Input Here
    dist1=(Tank*mpgtwn);
    dist2=(Tank*mpghwy);
 
    //Output Unknowns Here
    cout<<"Total Distance the car can travel in town is "<<dist1<<" miles per gallon"<<endl;
    cout<<"Total Distance the car can travel on the High way is "<<dist2<<" miles per gallon"<<endl;
    
    
    //Exit Stage Right!
       return 0;
}