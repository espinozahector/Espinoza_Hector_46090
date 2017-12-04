/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 10:25 AM
 * Purpose: Roman Numeral Converter
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
    int choice; 
    
    //Input 
    cout<<"Input a number between 1 and 10"<<endl;
    cin>>choice;
    
    //Switch statement
    switch(choice)
    {
        case 1:cout<<"The Roman numeral for 1 is | "<<endl;
                 break;
        case 2:cout<<"The Roman numeral for 2 is ||"<<endl;
                 break;
        case 3:cout<<"The Roman numeral for 3 is |||"<<endl;
                 break;
        case 4:cout<<"The Roman numeral for 4 is |V"<<endl;
                 break;
        case 5:cout<<"The Roman numeral for 5 is V"<<endl;
                 break;
        case 6:cout<<"The Roman numeral for 6 is V|"<<endl;
                 break;
        case 7:cout<<"The Roman numeral for 7 is V||"<<endl;
                 break;
        case 8:cout<<"The Roman numeral for 8 is V|||"<<endl;
                 break;
        case 9:cout<<"The Roman numeral for 9 is |X"<<endl;
                 break;
        case 10:cout<<"The Roman numeral for 10 is X"<<endl;
                 break;
        default:cout<<"You did not enter a number between 1 and 10"<<endl;
    }

    return 0;
}

