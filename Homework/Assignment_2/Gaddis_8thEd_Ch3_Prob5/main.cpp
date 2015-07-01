/* 
 * File:   main.cpp
 * Author: Hector Espinzoa
 * Created on June 30, 2015, 5:54 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>

using namespace std;

/* //User Libraries
 * 
 * //Global constants
 * 
 * //Function Prototypes
 * 
 * //Execution Begins Here!
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    unsigned int males,female;
    unsigned short ClsSiz;
    float Mtotal, Ftotal;
    //input Data
    cout<<"Input the number of males are in the class."<<endl;
    cin>>males;
    cout<<"Input the number of Females are in the class."<<endl;
    cin>>female;
    
    //Process Input to calculate class size
    ClsSiz=(males+female);
    
    //Find the class percentage for males and females
    Mtotal=(males/ClsSiz);
    Ftotal=(female/ClsSiz);
    
    //output the results
    cout<<"The percentage of Males in the class is "<<Mtotal<<" % "<<endl;
    cout<<"The percentage of Females in the class is "<<Ftotal<<" % "<<endl;
    cout<<ClsSiz<<endl;
    return 0;
}

