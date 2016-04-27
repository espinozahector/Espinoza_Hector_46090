/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 11:17 AM
 * Purpose: Color Mixer
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
    //Declare Variables
    unsigned int red_blu=1,
                 red_yel=2,
                 blu_yel=3;
    int choice;
    
    //Display the menu and get a choice
    cout<<"1. Mix Red and Blue"<<endl;
    cout<<"2. Mix Red and Yellow"<<endl;
    cout<<"3. Mix Blue and Yellow"<<endl;
    cout<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
   
    //Respond to the user's choice
    if (choice == red_blu)
    {
        cout<<"When you mix Red and Blue, you get Purple."<<endl;
    }
    else if (choice == red_yel)
    {
        cout<<"When you mix Red and Yellow, you get Orange."<<endl;
    }
    else if (choice == blu_yel)
    {
        cout<<"When you mix Blue and Yellow, you get Green."<<endl;
    }
    
    return 0;
}