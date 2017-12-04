/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 10:17 AM
 * Purpose: Minimum/ Maximum
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
    unsigned short value1;
    unsigned short value2;
    
    //Input values
    cout<<"Enter two numbers"<<endl;
    cin>>value1>>value2;
    
    //Which value is greater
    {
        if(value1>value2)
            cout<<value1<<" is greater then "<<value2<<endl;
        if(value2>value1)
            cout<<value2<<" is greater then "<<value1<<endl;   
    }

    return 0;
}