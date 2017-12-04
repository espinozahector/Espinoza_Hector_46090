/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 10, 2015, 6:46 PM
 * Purpose: Pennies for pay
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
    int Days, count=1, pennies;
    float total = 0.0;
    
    //Input the number of days worked
    cout<< " Enter Number Of Days Worked"<<endl;
    cin>>Days;
    pennies++; 
    
    while (count<=Days){
          cout<<"Days: "<<count<<endl;
          cout<<"Pay: "<<pennies<<endl;
          cout<<endl;
          //numPay++;?
          //total = numPay;
          pennies=pennies+pennies;
          total=pennies;
          count++;
          }
      cout<<" Total pay = "<<total<<endl;
    
      return 0;
    }
