/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 12, 2015, 5:35 PM
 * Purpose: Kinetic Energy
 */

#include <iostream>                       
#include <cmath>
using namespace std;
//User Libraries

//Global Constants
  
//Function Prototypes

void kinetic_formula (float mass, float velocity);

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    float mass;
    float velocity;
    
    //Input the mass of the object
    cout<<"Please enter the mass (must be greater than 0) of the object(in kilograms)"<<endl;
    cin>>mass;
    //Verify if the mass is greater than 0
    while (mass<=0){
        cout<<"Please enter the mass (must be greater than 0) of the object(in kilograms)"<<endl;
        cin>>mass;
    }  
    //Input the velocity
    cout<<"Please enter the velocity (must be greater than 0) of the object"<<endl; 
    cin>>velocity;
    //Verify if the velocity is greater than 0
    
    while (velocity<=0){
        cout << "Re-enter the velocity of the object: ";
        cin >> velocity;
    }
    kinetic_formula (mass, velocity);
    
    return 0;                                                 
}


void kinetic_formula (float mass, float velocity){  

        float kinetic_E;
        kinetic_E = (1/2) * mass * pow(velocity,2);
        cout<<"The kinetic energy of an object with a mass of "<<mass;
        cout<<" and "<<endl<<"a velocity of "<<velocity<<" yields a ";
        cout<<" kinetic energy of "<<kinetic_E<<" joules";
      
    }