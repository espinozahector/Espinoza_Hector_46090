/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 2, 2015, 11:03 AM;
 * Purpose: Generate the Fibonacci Sequence
 */

//System Libraries
#include <iostream>
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
    //Declare and initialize members of the sequence
    unsigned short fi=1,fip1=1,fip2;
    unsigned char terms=10;
    
    //Print the initial conditions
    cout<<"The number of terms in the Fibonacci sequence "<<
            "to display is "<<terms<<endl;
    cout<<"Term "<<1<<" in the sequence = "<<fi<<endl;
    cout<<"Term "<<2<<" in the sequence = "<<fip1<<endl;
   
    //Loop and show the terms as you generate
    for(unsigned char term=3;term<=terms;term++){
       
        //Calculate the next term in the sequence
        fip2=fi+fip1;
       
        //Output the current term
        cout<<"Term "<<static_cast<unsigned int>(term)<<" in the sequence = "<<fip2<<endl;
       
        //Now shift
        fi=fip1;
        fip1=fip2;
    }
    
    //Exit stage right!
    return 0;
}