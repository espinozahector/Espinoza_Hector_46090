/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 9, 2015, 11:05 AM
 * Purpose: Given date
 */

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

//Function Prototypes
bool isLpYr(unsigned short);
int gtMnVal(string,unsigned short);
int gtYrVal(unsigned short);
int gtCntVl(unsigned short);
string dayOfWk(string,short,unsigned short);

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short year;
    string month;
    const int SIZE=4;
    char rday[SIZE];
    char day[SIZE-1];
    short nDay;
    
    //Input the data
    cout<<"Input day form of July 4, 2008"<<endl;
    cin>>month;
    cin>>rday;
    cin>>year;
    
    //Translate the day into a number
    if(strlen(rday)==3){
        day[0]=rday[0];
        day[1]=rday[1];
        day[2]='\0';
    }else{
        day[0]=rday[0];
        day[1]='\0';
    }
    nDay=atoi(day);
    
    //Output the date
    cout<<"The date = "<<month<<" "<<nDay<<", "<<year<<endl;
    
    //Test the leap year
    cout<<"Year = "<<year<<" Leap year is "<<(isLpYr(year))<<endl;
    
    //Test the Month Value
    cout<<"Month Value = "<<gtMnVal(month,year)<<endl;
         
    //Test the get year function
    cout<<year<<" = "<<gtYrVal(year)<<endl; 
    
    //Test the century value
    cout<<year<<" = "<<gtCntVl(year)<<endl;
    
    //You day corresponding to the date is
    cout<<"Day = "<<dayOfWk(month,nDay,year)<<endl;
    
    //Exit Stage Right!     
    return 0;
    
}

string dayOfWk(string mn,short day,unsigned short yr){
    //Declare variable
    char numDay=(day+gtMnVal(mn,yr)+
                 gtYrVal(yr)+gtCntVl(yr))%7;
    //Return the day of the week
    switch(numDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Sunday";
        default:{
            cout<<"Bad Day"<<endl;
            return "Sunday";
        }
    }
}

int gtYrVal(unsigned short year){
    //Declare Variables
    char part1,part2;
    //Calculate the parts
    part1=year%100;
    part2=part1/4;
    //Return the results
    return part1+part2;
}
int gtCntVl(unsigned short year){
    return 2*(3-(year/100%4));
}

int gtMnVal(string month,unsigned short year){
    if(month=="January"){
        if(isLpYr(year))return 6;
         return 0;
        }else if(month=="Febuary"){
    if(isLpYr(year))return 2;
             return 3;
        }else if(month=="March"){
             return 3;
        }else if(month=="April"){
             return 3;
        }else if(month=="May"){
             return 1;
        }else if(month=="June"){
            return 1;
        }else if(month=="July"){
            return 4;
        }else if(month=="August"){
            return 6;
        }else if(month=="September"){
            return 2;
        }else if(month=="October"){
            return 0;
        }else if(month=="November"){
            return 3;
        }else if(month=="December"){
            return 5;
        }else{
            cout<<"This is not possible"<<endl;
            return -1;
        }
       
}
/******************************************************************************
 * *********************************isLpYr*************************************
 * *****************************************************************************
 * Purpose: To determine if the year is a leap year
 * Input:
 *      Year -> Years associated with AD
 * output:
 *      bool ->True is leap year || False if not a leap year
 */
bool isLpYr(unsigned short year){
    return ((year%400==0) || ((year%4==0) &&!(year%100==0)));
}
