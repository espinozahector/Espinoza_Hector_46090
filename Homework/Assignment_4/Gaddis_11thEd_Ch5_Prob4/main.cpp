/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 8, 2015, 6:44 PM
 * Purpose: Calories Burned
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
 
 //Global Constants
  
 //Function Prototypes
  
 //Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables
    int calorie;
   
  
    //use loop
    for(int count=5;count<=30;count+=5){
        calorie=3.6*count;
        cout<<"After "<<count<<" minutes of working out you will burn "
                <<calorie<<" calories"<<endl;
       
    }     

    

    return 0;
}

