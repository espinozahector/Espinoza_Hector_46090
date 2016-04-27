/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 1:04 PM
 * Purpose: 
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
    unsigned int air=1,
                 water=2,
                 steel=3;
    unsigned int choice;
    unsigned short dist,
                   total;
    
    //show point
    cout<<fixed<<showpoint<<setprecision(4);
    
    //Input 
    cout<<"1. Air"<<endl;
    cout<<"2. Water"<<endl;
    cout<<"3. Steel"<<endl;
    cout<<endl;
    cout<<"Enter 1 for Air,2 for Water or 3 for Steel"<<endl;
    cin>>choice;
    
    //Respond to users choice
    if (choice==air)
    {
        cout<<"Enter the distance a sound wave will travel in the selected medium in (ft)"<<endl;
        cin>>dist;
        //Calculate the amount of time it takes
        total=dist*1100;
        cout<<"The amount of time sound will take in Air would be "<<total<<endl;
    }
    else if (choice==water)
    {
        cout<<"Enter the distance a sound wave will travel in the selected medium in (ft)"<<endl;
        cin>>dist;
        //Calculate the amount of time it takes
        total=dist*4900;
        cout<<"The amount of time sound will take in Water would be "<<total<<endl;
    }
    else if (choice==steel)
    {
        cout<<"Enter the distance a sound wave will travel in the selected medium in (ft)"<<endl;
        cin>>dist;
        //Calculate the amount of time it takes
        total=dist*16400;
        cout<<"The amount of time sound will take in Steel would be "<<total<<endl;
    }
    return 0;
}