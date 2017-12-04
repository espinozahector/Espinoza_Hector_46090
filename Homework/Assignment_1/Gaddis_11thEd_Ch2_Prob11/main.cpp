/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 26, 2015, 5:55 PM
 * Purpose: Distance Per Tank of Gas
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
    float Tank =20;     //Total of Gallons the tank can hold
    float mpgtwn =23.5; //Mpg in town
    float mpghwy =28.9; //Mpg on the highway
    float dist1;        //Distance in town
    float dist2;        //Distance on the highway
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