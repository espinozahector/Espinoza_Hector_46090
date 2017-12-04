/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 2, 2015, 12:40 PM;
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

/* //User Libraries
 * 
 * //Global constants
 * 
 * //Function Prototypes
 * 
 * //Execution Begins Here!
 */
 
int main(int argc, char** argv) {
    
    //Declare variables
    float wave;

    //Loop
    do{
      
    //Output and input
    cout<<"Input the wave length of an electro magnet wave"<<
            " in scientific notation."<<endl;
    cin>>wave;
  
    if(wave>=1e-2)cout<<"The type of radiation is Radio Wave"<<endl;
    else if(wave<1e-2 && wave>=1e-3)cout<<"The type of radiation is Micro waves"<<endl;
    else if(wave<1e-3 && wave>=7e-7)cout<<"The type of radiation is Infrared waves"<<endl;
    else if(wave<7e-7 && wave>=4e-7)cout<<"The type of radiation is Visible Light"<<endl;
    else if(wave<4e-7 && wave>=1e-8)cout<<"The type of radiation is Ultra violet light"<<endl;
    else if(wave<1e-8 && wave>=1e-11)cout<<"The type of radiation is X-rays"<<endl;
    else if(wave>1e-11)cout<<"The type of radiation is Gamma rays"<<endl;
 
    }while(wave!=0);
    //Exit stage right!
    return 0;
}