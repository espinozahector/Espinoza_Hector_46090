/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 12, 2015, 5:16 PM
 * Purpose: Rectangle Area-Complete the Program
 */

#include <iostream>
using namespace std;
void Input (float&,float&);
float Area (float&,float&,float&);
void Display (float&,float&,float&);

int main(int argc, char** argv){
    //Declare Variables
    float length=0.0,    
          width=0.0,     
          area=0.0;      
          
    Input(length,width);
    area=Area(length,width,area);
    Display(length,width,area);
          
   return 0;
}

void Input (float &length,float &width){
    cout<<"Please enter the length and the width of the rectangle"<<endl;
    cin>>length>>width;
}

float Area (float &length,float &width,float &area){
	area=length*width;
	return area;
}

void Display (float &length,float &width,float &area){
	cout<<"The length of the rectangle is "<<length<<endl;
	cout<<"The width of the rectangle is "<<width<<endl;
	cout<<"The area of the rectangle is "<<Area(length,width,area)<<endl;
}