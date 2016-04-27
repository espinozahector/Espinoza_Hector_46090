/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 2, 2015, 11:18 AM;
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
    float crudWt,nDays;
    
    //Print the initial conditions
    cout<<"Input the initial crud weight in lbs"<<endl;
    cin>>crudWt;
    cout<<"Input the number of days allowed to grow"<<endl;
    cin>>nDays;
    
    //Scale the number of days to the Fibonacci Sequence
    terms=nDays/5+1;//scale by 5 days and start at a term=1
    
    //Given the 3 conditions 
    if(terms==1){
        cout<<"The crud weight after "<<nDays<<" = "<<crudWt<<"(lbs)"<<endl;
        
    }else if(terms==2){
         cout<<"The crud weight after "<<nDays<<" = "<<crudWt<<"(lbs)"<<endl;
    }else{
   
        //Loop and show the terms as you generate
        for(unsigned char term=3;term<=terms;term++){
            //Calculate the next term in the sequence
            fip2=fi+fip1;
            //Output the current term
            //Now shift
            fi=fip1;
            fip1=fip2;
        }
        cout<<"The crud weight after "<<nDays<<" = "<<fip2*crudWt<<"(lbs)"<<endl;
    
    }
    //Exit stage right!
    return 0;
    }