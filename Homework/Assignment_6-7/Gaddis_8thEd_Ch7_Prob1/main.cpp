/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 24, 2015, 5:25 PM
 * Purpose: Largest/Smallest Array Values
 */

//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) { 
    //Declare variables
    const int SIZE=10;    //size of the array
    int array[SIZE];      //integer array
    int min,              //smallest value
        max;              //largest value
    //user input numbers into the array
    cout<<"Enter "<<SIZE<<" numbers"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Number "<<i+1<<": ";
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
    //output the results
    cout<<"The smallest number you entered is "<<min<<endl;
    cout<<"The largest number you entered is "<<max<<endl;
    //Exit Stage Right!
    return 0;
}

