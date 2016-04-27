/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 *Created on June 23, 2015, 1:36 PM
 * Purpose to calculate the Militaries spending budgt
 */

//System Libraries
#include <iostream> //I/O Library

using namespace std;//Namespace for iostream

//User Libraries
 
//Global Constants
 
//Function Prototype 

//Execute Begins Here!

int main(int argc, char** argv) {
    //Declared Variables
    float PmlBudg; //percentage of military budget
    float fedbudg= 3.9e12f; //federal budget
    float milbudg= .598e12f; // military budget
    PmlBudg=(milbudg/fedbudg);
    cout<<"The percentage of Military recieves is= "<<PmlBudg*100<<"%"<<endl;
    
    return 0;
}

