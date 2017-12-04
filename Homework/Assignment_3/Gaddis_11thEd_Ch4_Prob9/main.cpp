/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 12:32 AM
 * Purpose: Change for a dollar game
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

/* //User Libraries
 * 
 * //Global Constants
 * 
 * //Function Prototypes
 * 
 *///Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float Ptotal,
          Ntotal,
          Dtotal,
          Qtotal,
          total;
    
    //Input the number of coins
    cout<<"Input the number of coins you have ,you win if your amount is equal to $1.00"<<endl;
    cout<<"Input the number of pennies"<<endl;  
    cin>>Ptotal;
    cout<<"Input the number of Nickels"<<endl;
    cin>>Ntotal;
    cout<<"Input the number of Dimes"<<endl;
    cin>>Dtotal;
    cout<<"Input the number of Quarters"<<endl;
    cin>>Qtotal;
    
    //set the output to 2 decimal places
    cout<<fixed<<showpoint<<setprecision(2);
    
    //Calculate total
    Ptotal=(Ptotal*.01);
    Ntotal=(Ntotal*.05);
    Dtotal=(Dtotal*.1);
    Qtotal=(Qtotal*.25);
    total=(Ptotal+Ntotal+Dtotal+Qtotal);
    
    {
        if(total==1.00)
            cout<<"Congratulations!!!You Win!!"<<endl;
        
        if(total<1.00)
            cout<<"Sorry, the amount you put in was smaller than $1.00. Please try again"<<endl;
        
        if(total>1.00)
            cout<<"Sorry, the amount you put in was larger than $1.00. Please try again"<<endl;
    }
    

    return 0;
}

