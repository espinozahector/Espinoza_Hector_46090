/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 23, 2015, 2:34 PM
 * Purpose: Gaddis Chapter 8
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argv,char *argc[]){
    
    //initialize array
    const int SIZE=18;
    unsigned int account[SIZE]={5658845,4520125,7895122,8777541,
                                8451277,1302850,8080152,4562555,
                                5552012,5050552,7825877,1250255,
                                1005231,6545231,3852085,7576651,
                                7881200,4581002};
    
    //Declare variables
    unsigned int number;
    bool found=false;
    
    //Input the account number 
    cout<<"Enter account number: ";
    cin>>number;
    
    for(int i=0;i<SIZE;i++){
        if(account[i]==number){
            cout<<number<<" was valid"<<endl;
            found=true;
        }
    }
    if(!found){
        cout<<number<<" is invalid"<<endl<<endl;
        }
       return 0;
    }