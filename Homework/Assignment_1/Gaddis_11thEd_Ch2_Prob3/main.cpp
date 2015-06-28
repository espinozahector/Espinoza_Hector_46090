/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 26, 2015, 5:26 PM
 * Purpose:  To find the total Sales Tax
 */
 
//System Libraries
#include <iostream>//File I/O
#include <iomanip>
using namespace std; //std namespace -> iostream
 
//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float Price= 95.00;
    float SalTax= .04;
    float CounTax= .02;
    float STaxTtl;
    float CTaxTtl;
    float SCTax;
 
    //Input Values Here
 
    //Process Input Here
    STaxTtl=(Price*.04);
    CTaxTtl=(Price*.02);
    SCTax=(CTaxTtl+STaxTtl);
 
    //Output Unknowns Here]
    cout<<fixed<<showpoint<<setprecision(2)<<SCTax<<endl;
    
    //Exit Stage Right!
    return 0;
}