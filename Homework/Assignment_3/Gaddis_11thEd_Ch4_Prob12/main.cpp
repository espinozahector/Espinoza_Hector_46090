/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 2:52 PM
 * Purpose: 
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
    //Declare variables
    unsigned int purch;
    unsigned short total,
                   total1,
                   total2,
                   total3;
    
    //
    cout<<"How many packages were bought?"<<endl;
    cin>>purch;
    
    if(purch<10 && purch>=0)
    {
        total=purch*99;
        cout<<"The total cost is $"<<total<<endl;
    }
     if(purch>=10 && purch<=19)
    {
        total1=(purch*99);
        total2=(total1*.2);
        total3=(total1-total2);
        cout<<"The total cost is $"<<total3<<endl;
    }
     if(purch>=20 && purch<=49)
    {
        total1=(purch*99);
        total2=(total1*.3);
        total3=(total1-total2);
        cout<<"The total cost is $"<<total3<<endl;
    }
     if(purch>=50 && purch<=99)
    {
        total1=(purch*99);
        total2=(total1*.4);
        total3=(total1-total2);
        cout<<"The total cost is $"<<total3<<endl;
    }
     if(purch>=100)
    {
        total1=(purch*99);
        total2=(total1*.5);
        total3=(total1-total2);
        cout<<"The total cost is $"<<total3<<endl;
    }
    return 0;
}
