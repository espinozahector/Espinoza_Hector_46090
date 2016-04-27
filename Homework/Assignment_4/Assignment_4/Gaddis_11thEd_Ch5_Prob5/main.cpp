/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 10, 2015, 1:06 PM
 * Purpose: Membership fee's
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
 
 //Global Constants
  
 //Function Prototypes
  
 //Execution Begins Here!
int main(int argc, char** argv) {
    
    for(int count=1;count<=6;count++){
        int price=2500;
        price=(count*(price*.04)+price);
        cout<<"In "<<count<<" years the price of membership will be $"
                <<price<<endl;
    }

    return 0;
}

