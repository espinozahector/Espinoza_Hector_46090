/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 5, 2015, 1:44 PM
 * Purpose: Geometry Calculator
 */

//System Libraries
#include <iostream>
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
    unsigned int   circle=1,//Circle
                   rect=2,  //Rectangle
                   tri=3,   //Triangle
                   quit=4;  //Quit game
    unsigned int   choice;  //Choice of the menu
    unsigned short radius,  //Radius of the circle
                   length,  //length of the rectangle
                   width,   //width of the rectangle
                   base,    //base of the triangle
                   height,  //height of the triangle
                   area;    //area of the circle, rectangle and triangle
    
    //Display the menu and choose
    cout<<"1. Calculate the area of a Circle"<<endl;
    cout<<"2. Calculate the area of a Rectangle"<<endl;
    cout<<"3. Calculate the area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cout<<endl;
    cout<<"Enter your choice (1-4):"<<endl;
    cin>>choice;
    //Respond to users choice
    if (choice==circle)
    {
        cout<<"Input the radius of the circle"<<endl;
        cin>>radius;
        
        //Calculate the area of the circle
        area=3.14159*radius*radius;
        
        //Output the results
        cout<<"The area of a circle is "<<area<<endl;
    }
    if (choice==rect)
    {
        cout<<"Input the length and width of the rectangle"<<endl;
        cin>>length>>width;
        
        //Calculate the area of the circle
        area=length*width;
        
        //Output the results
        cout<<"The area of a rectangle is "<<area<<endl;
    }
    if (choice==tri)
    {
        cout<<"Input the base and the height of the triangle"<<endl;
        cin>>base>>height;
        
        //Calculate the area of the circle
        area=base*height*.5;
        
        //Output the results
        cout<<"The area of a triangle is "<<area<<endl;
    }
    if (choice==quit)
    {
        cout<<"Have a nice day :)"<<endl; 
    }


    return 0;
}

