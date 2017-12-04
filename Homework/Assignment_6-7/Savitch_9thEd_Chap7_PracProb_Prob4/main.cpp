/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on July 24, 2015, 6:00 PM
 * Purpose: Homework, savitch chap7 prob4
 */

//System Libraries
#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
string looknum(string, string [], string [], const int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    const int SIZE=5;
    string names[]={"Michael Myers", "Ash Williams", "Jack Torrance", "Freddy Krueger", "Jenny Tutone"};
    string fonenum[]={"333-8000", "333-2323", "333-6150", "339-7970", "867-5309"};
    string tarname, tarfone;
    char c;
    do{
        cout<<"Enter a name to find the corresponding phone number. "<<endl;
        getline(cin, tarname);
        tarfone=looknum(tarname, names, fonenum, SIZE);
        if(tarfone.length()>0){
            cout<<"The number is: "<<tarfone<<endl;
        }else{
            cout<<"Name not found."<<endl;
        }
        cout<<"Look up another name? (y/n)"<<endl;
        cin>>c;
        cin.ignore();
    }while(c=='y' || c=='Y');
   
    //Exit Stage Right!
    
    return 0;
}

/**********************************************************************************
 ************************************looknum***************************************
 **********************************************************************************
 * Purpose: to look up a number
 * Input: looknum
 * Output: Display
 */

string looknum(string tarname, string names[], string fonenum[], const int SIZE){
    if(tarname==names[0]){
        return fonenum[0];
    }else if(tarname==names[1]){
        return fonenum[1];
    }else if(tarname==names[2]){
        return fonenum[2];
    }else if(tarname==names[3]){
        return fonenum[3];
    }else if(tarname==names[4]){
        return fonenum[4];
    }
}