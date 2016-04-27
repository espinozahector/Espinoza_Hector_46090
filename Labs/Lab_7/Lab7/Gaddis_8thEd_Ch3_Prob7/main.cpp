/* 
 * File:   main.cpp
 * Author: Hector Espinzoa
 * Created on June 30, 2015, 6:36 PM
 * Purpose: Box Office
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
    unsigned short AdulTi, ChilTi; //Adult ticket, Child Ticket
    unsigned int AdulTtl,ChilTtl;  //Adult Ticket sale total, Child Ticket sale total
    float Gross, Netbox, Paid;//Gross profit, profit to theater, Profit to distributor
    
    //Input data
    cout<<"Input the name of the movie."<<endl;
    std:getline(cin,movie);
    cout<<"Input the number of Adult tickets were sold."<<endl;
    cin>>AdulTi;
    cout<<"Input the number of Child tickets were sold."<<endl;
    cin>>ChilTi;
   
    //Process inputs
    AdulTtl=(AdulTi*10.00);
    ChilTtl=(ChilTi*6.00);
    Gross=(AdulTtl+ChilTtl);
    Netbox=(Gross*0.2f);
    Paid=(Gross-Netbox);
     
    //Output the results
    cout<<"Movie Name:                    "<<setw(7)<<movie<<endl;
    cout<<"Adult Tickets Sold:            "<<setw(7)<<AdulTi<<endl;
    cout<<"Child Tickets Sold:           $"<<setw(7)<<ChilTi<<endl;
    cout<<"Gross Box Office Profit:      $"<<setw(7)<<Gross<<endl;
    cout<<fixed<<setprecision(2)<<"Net Box Office Profit:        $"<<setw(7)<<Netbox<<endl;
    cout<<"Amount Paid To Distributor:   $"<<setw(7)<<Paid<<endl;
            
    return 0;
}
