/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 10, 2015, 8:53 PM
 * Purpose: Character for the ASC2 codes
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
 
 //Global Constants
  
 //Function Prototypes
  
 //Execution Begins Here!
int main(int argc, char** argv){
    
    cout<<"Characters for the ASCII Codes";//Displays what is to be given
    
	for(int code=0;code<=127;code++)    //will loop until counter is reached to 127
	{
		if (code%16==0)             //Set to start a new line every 16 codes
		cout << endl;           
		cout<<(char)code<<"  ";
	}
	return 0;
}
