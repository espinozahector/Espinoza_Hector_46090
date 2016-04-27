/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 8, 2015, 5:43 PM
 * Purpose: Sum of numbers
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
    unsigned int number; //Number value wished to be calculated to
    unsigned int one=1;  //Set to always start at one
    unsigned int total=0;//The total sum
    
    //Input variables
    cout<<"Input a positive value integer"<<endl;
    cin>>number;
    cout<<"I will now start the counter"<<endl;
   
    while(one<=number){
        total+=one;
        cout<<one<<endl;
        one++;
    }
        cout<<"The total of all the sums is "<<total<<endl; 
    return 0;
}