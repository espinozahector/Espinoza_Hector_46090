/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on June 25, 2015, 12:25 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

/* //User Libraries
 * 
 * //Global Libaries 
 * 
 * //Function Libraries
 * 
*/ //Execution Begins

int main(int argc, char** argv) {
   
    //Declare Variables
    float VioCUS = 11.88; //Violent Crimes in the United Sates (in millions)
    float VioCUk = 6.52;  //Violent Crimes in the United Kingdom (in millions)
    float PopUS = 318;    //Population in the United Sates (in millions)
    float PopUk = 64.1;   //Population in the United Kingdom (in millions)
    float PerUS;          //Percentage of violent crimes in the United States
    float PerUK;          //Percentage of violent crimes in the United Kingdom
    
    //Process input here
    PerUS=(VioCUS/PopUS)*(100);
    PerUK=(VioCUk/PopUk)*(100);
    
    //Process output here
    cout<<fixed<<showpoint<<setprecision(2)<<"Percentage of Violent Crimes in the Unitd States = "<<PerUS<<" % "<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Percentage of Violent Crimes in United Kingdom = "<<PerUK<<" % "<<endl;
    
    //Exit Stage here!
    
    return 0;
}

