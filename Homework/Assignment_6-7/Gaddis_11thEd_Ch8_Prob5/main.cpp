/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 24, 2015, 12:43 PM
 * Purpose: Search Benchmarks
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int linSrch(const int [], int, int);
int binSrch(const int [], int, int);

//Execution Begins Here!
int main(int argc, char** argv){
        //Declare Variables Here
	int const SIZE = 20;					
	int linear;
	int Binary;
	int pin;
        int access[SIZE]={12, 23, 34, 45, 56, 67, 78, 89, 90, 114, 255, 348, 451, 561, 645, 754,835,912, 1765,2753};
        
        //Input valid pin number
	cout<<"Please enter a valid PIN Number: ";
	cin>>pin;
        
	cout<<"I will search for the PIN number using searchList function"<<endl;
	linear=linSrch(access, SIZE, pin);
	if(linear==-1){
            cout<<"You did not enter a valid PIN number."<<endl;
	}else{
		cout<<"You entered a valid PIN number"<<endl;
		cout<<(linear + 1)<<endl;
	}
	cout<<"I will now search for the PIN number using the Binary search function."<<endl;
	Binary = binSrch(access, SIZE, pin);
	if(Binary==-1){
            cout<<"You have entered an invalid PIN number."<<endl;
        }else{
		cout<<"You have entered a valid PIN number."<<endl;
		cout<<Binary<<endl;
	}
        //Exit Stage Here!
	return 0;
}
int linSrch(const int list[], int size, int value){
	int index=0,
        position= -1;
	bool found=false;
	while(index < size && !found){
		if(list[index]==value){
			found=true;
			position=index;
		}
		index++;
	}
	return position;
}
int binSrch(const int list[], int size, int value){
	int first=0,
		last=size -1,
		middle,
		position= -1;
	bool found = false;
	while(!found && first<=last){
		middle=(first+last)/2;
		if (list[middle]==value){
			found=true;
			position=middle;
		}else if (list[middle]>value)
			last=middle -1;
		 else
			first=middle +1;
	}
	return position;
}