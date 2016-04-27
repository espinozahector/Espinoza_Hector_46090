/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 11:00 AM
 * Purpose: Areas of Triangles
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

/* //User Libraries
 * 
 * //Global Constants
 * 
 * //Function Prototypes
 * 
 *///Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    float length1,width1; //Length and width of the first triangle
    float length2,width2; //Length and width of the second triangle
    float tri1,tri2;      //Total area of the first and second triangle
    
    //Input the values
    cout<<"What is the length and width of the first triangle?"<<endl;
    cin>>length1>>width1;
    cout<<"What is the length and width of the second triangle?"<<endl;
    cin>>length2>>width2;
    
    //Calculate the areas of both triangles
    tri1=(length1*width1); 
    tri2=(length2*width2);
    
    //Determine which triangle is larger
    {
        if (tri1>tri2)
            cout<<"Triangle 1 is larger than Triangle 2"<<endl;
        if (tri2>tri1)
            cout<<"Triangle 2 is larger than Triangle 1"<<endl;
        if (tri1==tri2)
            cout<<"Triangle 1 and Triangle 2 have the same area"<<endl;
    }

    return 0;
}

