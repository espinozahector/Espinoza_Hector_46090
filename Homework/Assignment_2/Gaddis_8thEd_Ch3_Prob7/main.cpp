/* 
 * File:   main.cpp
 * Author: Hector Espinzoa
 * Created on June 30, 2015, 6:36 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <cstring>
#include <iomanip>
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
    string movie;
    unsigned short AdulTi, ChilTi;
    unsigned int AdulTtl,ChilTtl;
    unsigned int Gross, Netbox, Paid;
    
    //Input data
    cout<<"Input the name of the movie"<<endl;
    std:getline(cin,movie);
    cout<<"Input the number of Adult tickets were sold."<<endl;
    cin>>AdulTi;
    cout<<"Input the number of Child tickets were sold."<<endl;
    cin>>ChilTi;
   
    //Process inputs
    AdulTtl=(AdulTi*10.00);
    ChilTtl=(ChilTi*6.00);
    Gross=(AdulTtl+ChilTtl);
    Netbox=(Gross*.2);
    Paid=(Gross-Netbox);
   
    //Output the results
    
    cout<<fixed<<showpoint<<setprecision(2)<<"Movie Name:                    "<<movie<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Adult Tickets Sold:            "<<AdulTi<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Child Tickets Sold:           $"<<ChilTi<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Gross Box Office Profit:      $"<<Gross<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Net Box Office Profit:        $"<<Netbox<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Amount Paid To Distributor:   $"<<Paid<<endl;
            
    return 0;
}

