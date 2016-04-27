/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 11, 2015, 3:26 PM
 * Purpose: The Greatest and the least of these
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
        int number,
        least=number,
        great=number;
    //Input the desired numbers
    cout<<"Enter a number(-99 to quit): ";
    cin>>number;

    while (number != -99)
    {
        cout<<"Enter a number(-99 to quit): ";
        cin>>number;
        //Use if statements to find the greatest and least number
        if(number==-99)
            break;
        if(number<least)
        {
            least=number;
        }
        if(number>great)
        {
            great=number;
        }
    }
    //Output the results
    cout<<"least: " <<least<<endl;
    cout<<"greatest: "<<great<<endl;
    
    return 0;

}
