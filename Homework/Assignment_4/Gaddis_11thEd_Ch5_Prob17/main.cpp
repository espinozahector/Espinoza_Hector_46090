/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 11, 2015, 2:12 AM
 * Purpose: Sales Bar Chart
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv){
    //Declare Variables
	int  store1=0,//todays sales for store 1
             store2=0,//todays sales for store 2
             store3=0,//todays sales for store 3
             store4=0,//todays sales for store 4
             store5=0,//todays sales for store 5
             str1=0,
             str2=0,
             str3=0,
             str4=0,
             str5=0,
             row;    //number of stars

        //Inputs the total sales for each store
	cout<<" Enter the sales for the five stores."<<endl;
	cout<<"Enter sales for store 1 : ";//entering sales
	cin>>store1;
	cout<<"Enter sales for store 2 : ";
	cin>>store2;
	cout<<"Enter sales for store 3 : ";
	cin>>store3;
	cout<<"Enter sales for store 4 : ";
	cin>>store4;
	cout<<"Enter sales for store 5 : ";
	cin>>store5;
        //Outputs the heading
	cout<<"SALES BAR GRAPH"<<endl;
	cout<<"(Each * = $100)"<<endl;
        
        //calculate the number of *  
	str1= store1/100;
	str2= store2/100; 
	str3= store3/100; 
	str4= store4/100; 
	str5= store5/100; 

	{ 
		if((store1-str1*100)>=50) 
                str1 = str1+1; 
		cout<<endl<<"Store 1: "; 
                
		for(row=0;row<str1;row++) 
			cout<<'*';  
                
		if((store2-str2*100)>=50)  
			str2=str2+1; 
		cout<<endl<<"Store 2: "; 
                
		for(row=0;row<str2;row++)    
			cout<<'*';   
                
		if((store3-str3*100)>= 50)  
			str3 = str3 + 1; 
		cout<<endl<<"Store 3: ";
                
		for(int row=0;row<str3;row++) 
			cout<<'*';  
                
		if((store4-str4*100)>=50)
			str4=str4+1; 
		cout<<endl<<"Store 4: ";
                
		for(int row=0;row<str4;row++)  
			cout<<'*';  
                
		if((store5-str5*100)>=50) 
			str5=str5+1;  
		cout<<endl<<"Store 5: "; 
                
		for(int row=0;row<str5;row++)   
			cout<<'*';
	}
	cout<<endl;
	return 0;
}
