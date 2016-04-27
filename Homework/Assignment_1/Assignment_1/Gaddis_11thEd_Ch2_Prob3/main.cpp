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
    float Price= 95.00; //Price purchase
    float SalTax= .04;  //Sales Tax
    float CounTax= .02; //County Tax
    float STaxTtl;      //Sales tax total
    float CTaxTtl;      //County tax total
    float SCTax;        //Sales tax + County Tax
 
    //Input Values Here
 
    //Process Input Here
    STaxTtl=(Price*SalTax);
    CTaxTtl=(Price*CounTax);
    SCTax=(CTaxTtl+STaxTtl);
 
    //Output Unknowns Here]
    cout<<fixed<<showpoint<<setprecision(2)<<"The total Sale tax = $"<<SCTax<<endl;
    
    //Exit Stage Right!
    return 0;
}