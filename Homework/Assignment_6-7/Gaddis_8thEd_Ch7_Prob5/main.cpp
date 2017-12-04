/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 24, 2015, 6:32 PM
 * Purpose: Monkey Business
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) { 
    //Define variables
    const int ROWS=3,
              COLS=5;
    int foodEat[ROWS][COLS];
    float sum=0,  //sum of all food eaten
          avg,    //average of all food eaten
          min=100,  //minimum of any food eaten
          max=0;  //maximum of any food eaten
    
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            cout<<"Monkey "<<i+1;
            cout<<", Amount fed Day "<<j+1<<": ";
            cin>>foodEat[i][j];
        }
        cout<<endl;
    }
    //sum all food eaten
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            sum+=foodEat[i][j];
        }
    }
    //average of food eaten
    avg=sum/COLS;
    //find the smallest and largest
    int minpRow,  //position of minimum row
        minpCol,  //position of minimum column
        maxpRow,  //position of maximum row
        maxpCol;  //position of maximum column
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            if(foodEat[i][j]<=min){
                    min=foodEat[i][j];
                    minpRow=i;
                    minpCol=j;
            }
            if(foodEat[i][j]>=max){
                    max=foodEat[i][j];
                    maxpRow=i;
                    maxpCol=j;
            }
        }
    }
    cout<<endl;
    cout<<"Average food eaten per day = "<<avg<<" lbs"<<endl;
    cout<<"Minimum pounds of food eaten by any Monkey = "<<foodEat[minpRow][minpCol]<<" lbs"<<endl;
    cout<<"Maximum pounds of food eaten by any Monkey = "<<foodEat[maxpRow][maxpCol]<<" lbs"<<endl<<endl;
    //Exit Stage Right!
    return 0;
}

