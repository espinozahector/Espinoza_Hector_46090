/* 
 * File:   main.cpp
 * Author: Hector Espinzoa
 * Created on June 30, 2015, 5:54 PM
 * Purpose: Male and Female Percentage
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
 * inip
 * //Execution Begins Here!
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    float males,female;    //Number of males, number of females
    unsigned short ClsSiz; //Classroom size
    float Mtotal, Ftotal;  //Male Total, Female Total
    //input Data
    cout<<"Input the number of males are in the class."<<endl;
    cin>>males;
    cout<<"Input the number of Females are in the class."<<endl;
    cin>>female;
    
    //Process Input to calculate class size
    ClsSiz=(males+female);
    
    //Find the class percentage for males and females
    Mtotal=((males/ClsSiz)*100);
    Ftotal=((female/ClsSiz)*100);
    
    //output the results
    cout<<"The percentage of Males in the class is "<<Mtotal<<" % "<<endl;
    cout<<"The percentage of Females in the class is "<<Ftotal<<" % "<<endl;
    return 0;
}
