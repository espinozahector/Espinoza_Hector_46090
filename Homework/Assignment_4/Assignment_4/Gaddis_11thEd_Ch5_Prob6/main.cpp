
/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 10, 2015, 1:06 PM
 * Purpose: Calories Burned
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
 
 //Global Constants
  
 //Function Prototypes
  
 //Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short speed, hours; //total speed, Number of hours driven
    unsigned short total;        //total of speed * hours
    unsigned short one=1;        //Counter to always start at one
    //Input the values
    cout<<"Input the speed of the vehicle (in miles per hour)"<<endl;
    cin>>speed;
    cout<<"Input the number of hours the vehicle has traveled"<<endl;
    cin>>hours;
    cout<<"**************************************************"<<endl;
    
    while(one<=hours){
        total=(one*speed);
        cout<<one<<"      "<<total<<endl;
        one++;
    }
    
    

    return 0;
}

