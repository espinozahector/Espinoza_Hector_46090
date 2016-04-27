/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 10:49 AM
 * Purpose: Magic Dates
 */

//System Libraries
#include <iostream>
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
    unsigned short month,day,year; //Month, Day and year in a two digit format
    unsigned short year2;          //The total of the day * year

    //Input dates
    cout<<"Input a month, a day and a two-digit year"<<endl;
    cin>>month>>day>>year;
    
    //Calculate if it is a magic year
    year2=(month*day);
    
    //If statement 
    {
        if(year==year2)
            cout<<"The Date is Magic"<<endl;
        else
            cout<<"The Date is Not Magical"<<endl;
    }
    
    return 0;
}