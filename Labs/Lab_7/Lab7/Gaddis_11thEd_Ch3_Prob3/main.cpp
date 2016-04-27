/* 
 * File:   main.cpp
 * Author: Hector Espinzoa
 * Created on July 1, 2015, 1:50 PM
 * Purpose: Test Average
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

/* //User Libraries
 * 
 * //Global constants
 * 
 * //Function Prototypes
 * 
 * 
 *///Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
    float Test1,Test2,Test3,Test4,Test5,Ave;
    
    //Input the test scores
    cout<<"Input the Five test scores"<<endl;
    cin>>Test1>>Test2>>Test3>>Test4>>Test5;
    
    //Calculate the average
    Ave=(Test1+Test2+Test3+Test4+Test5)/(5);
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(1)<<"The average test score for all five test is "<<Ave<<endl;
    return 0;
}

