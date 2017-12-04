/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 8, 2015, 6:23 PM
 * Purpose: Ocean levels
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
 
 //Global Constants
  
 //Function Prototypes
  
 //Execution Begins Here!
int main(int argc, char** argv) {
    //Declare
    float rise=1.5;
    float years=1;
    float total;
    
    while(years<=25){
        total=1.5f*years;
        cout<<"In "<<years<<" years the sea level will rise a total of "
                <<total<<" millimeters."<<endl;
        years++;
    }
	return 0;
}