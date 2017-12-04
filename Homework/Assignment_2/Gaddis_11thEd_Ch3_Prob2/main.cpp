/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 3:49 PM
 * Purpose: Stadium seating
 */

//System Libraries
#include <iostream>
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
    //Declare variables
    unsigned short classA,
            classB,
            classC,
            total;
    
    //Input and output
    cout<<"Input the number of Class A seats were sold"<<endl;
    cin>>classA;
    cout<<"Input the number of Class B seats were sold"<<endl;
    cin>>classB;
    cout<<"Input the number of Class C seats were sold"<<endl;
    cin>>classC;
    
    //Calculate the profit
    classA=(classA*15);
    classB=(classB*12);
    classC=(classC*9);
    total=(classA+classB+classC);

    //output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total income generated from ticket sales is $"<<total<<endl;

    return 0;
}