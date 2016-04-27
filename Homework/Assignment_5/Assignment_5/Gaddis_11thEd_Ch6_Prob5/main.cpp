/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 12, 2015, 4:40 AM
 * Purpose: Falling Distance
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries
 
 //Global Constants
  
 //Function Prototypes

const float g = 32.2;
float fallingDistance(float);
 //Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    int t;
    float time,d;

    cout<<"Seconds     Distance\n";
    cout<<"-------------------\n";

for (t=0;t<=11;t++){
    time=t+1.0;
    d=fallingDistance(time);
    cout<<setw(5)<<fallingDistance<<endl;
    }	

    return 0;
}


float fallingDistance(float time)
{
float d=(pow(time,2)*g)*.5;
cout<<setw(7)<<d;
return d;
}