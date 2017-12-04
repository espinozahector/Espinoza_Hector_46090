
/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 24, 2015, 5:33 PM
 * Purpose: Rainfall Statistics
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
 
//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
        //initialize array
    const int SIZE=12;
    float array[SIZE];
    
    //define variables
    float min,    //smallest value
          max,    //largest value
          sum=0,  //The sum of all the rainfall
          avg;    //average of all the rainfall
    
    //Input the values
    cout<<"Enter the amount of rainfall in inches per month for "<<SIZE<<" months"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Month number "<<i+1<<": ";
        cin>>array[i];
    }
    
    //find the smallest and largest
    min=array[0];
    max=array[0];
    for(int j=0;j<SIZE;j++){
        if(array[j]<=min){
                min=array[j];
            }
        if(array[j]>=max){
                max=array[j];
            }
    }
    
    //find sum and average
    for(int k=0;k<SIZE;k++){
        sum+=array[k];
    }
    avg=sum/SIZE;
    
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Rainfall for the year is "<<sum<<" inches"<<endl;
    cout<<"Average rainfall for the year is "<<avg<<" inches"<<endl;
    cout<<"Max rainfall any month is "<<max<<" inches"<<endl;
   //Exit Stage Right!
    return 0;
}

