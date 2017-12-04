/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 24, 2015, 5:25 PM
 * Purpose: Grade Book Modification
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) { 
    //Declare variables
    const int STUDENT=5,                        //number of students
              GRADES=5,                         //number of letter grades
              SCORES=4;                         //number of test scores
    string names[STUDENT];                      //array of student names
    char letGrad[GRADES]={'F','D','C','B','A'}; //array of letter grades
    float stuScre[STUDENT][SCORES];
    float sumStu[STUDENT];
    float avg;      //average of each test score per student
    int   min=100;  //minimum score
    
    //write student names and scores
    for(int i=0;i<STUDENT;i++){
        int sum=0;
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>names[i];
        for(int j=0;j<SCORES;j++){
            do{
            cout<<names[i]<<": Score "<<j+1<<": ";
            cin>>stuScre[i][j];
            if(stuScre[i][j]<min){
                min=stuScre[i][j];
            }
            if(stuScre[i][j]==0){
                    cout<<"You got a zero?!?!?!"<<endl;
                }
            if(stuScre[i][j]<0 || stuScre[i][j]>100){
                cout<<"A test score cannot be less than 0 or greater than 100"<<endl<<endl;
            }
            }while(stuScre[i][j]<0 || stuScre[i][j]>100);
            sum+=stuScre[i][j];
        }
        sum-=min;
        sumStu[i]=sum;
    }
    cout<<endl;
    
    //output letter grade
    for(int i=0;i<STUDENT;i++){
        avg=sumStu[i]/3;
        cout<<names[i]<<"'s Grade with lowest test score dropped: ";
        if(avg>=90) cout<<"Average: "<<avg<<"% "<<letGrad[4]<<endl;
        else if(avg>=80) cout<<"Average: "<<avg<<"% "<<letGrad[3]<<endl;
        else if(avg>=70) cout<<"Average: "<<avg<<"% "<<letGrad[2]<<endl;
        else if(avg>=60) cout<<"Average: "<<avg<<"% "<<letGrad[1]<<endl;
        else cout<<"Average: "<<avg<<"% "<<letGrad[0]<<endl;
    }
    cout<<endl;
    //Exit Stage Right!
    return 0;
}

