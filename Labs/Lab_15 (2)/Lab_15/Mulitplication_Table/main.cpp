/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 15, 2015, 12:12 AM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global constants
   
    
//Function Prototypes
void heading(int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROW=12;
    const int COLM=12;
    int array2[ROW][COLM];
    
    //Display the heading
  
    
    //For loop o fill the array with values
    cout<<"       ";
    for(int i=1;i<=12;i++){
        cout<<setw(5)<<i;
    }cout<<endl;
    cout<<"      *************************************************************"<<endl;
    
    for(int i=0;i<ROW;i++){
        cout<<setw(4)<<i+1<<"  *";
        for(int j=0;j<COLM;j++){
            array2[i][j]=(1+i)*(j+1);

            cout<<setw(5)<<array2[i][j]; 
            
        } 
        cout<<endl;
    }

    //Exit Stage right!
    return 0;
}
void heading(){
         for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){

}
}
}

   
