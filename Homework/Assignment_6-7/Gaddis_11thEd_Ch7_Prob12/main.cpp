/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 24, 2015, 6:39 PM
 * Purpose: Grade Book
 */


#include <iostream>
#include <cstring>
using namespace std;


int main(int argc, char** argv) {
    //initialize the array
    const int STUDENT=5,         //number of students
              GRADES=5,          //number of letter grades
              SCORES=4;          //number of test scores
    string names[STUDENT];       //array of student names
    char letGrad[GRADES]={'F','D','C','B','A'}; //array of letter grades
    float stuScre[STUDENT][SCORES];
    float sumStu[STUDENT];
    float avg;  
    
    for(int i=0;i<STUDENT;i++){
        int sum=0;
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>names[i];
        for(int j=0;j<SCORES;j++){
            do{
            cout<<names[i]<<": Score "<<j+1<<": ";
            cin>>stuScre[i][j];
            if(stuScre[i][j]==0){
                    cout<<"You got a zero?!?!?! Get a life!"<<endl;
                }
            if(stuScre[i][j]<0 || stuScre[i][j]>100){
                cout<<"A test score cannot be less than 0 or greater than 100"<<endl<<endl;
            }
            }while(stuScre[i][j]<0 || stuScre[i][j]>100);
            sum+=stuScre[i][j];
        }
        sumStu[i]=sum;
    }
    cout<<endl;
    
    for(int i=0;i<STUDENT;i++){
        avg=sumStu[i]/4;
        cout<<names[i]<<"'s Grade: ";
        if(avg>=90) cout<<"Average: "<<avg<<"% "<<letGrad[4]<<endl;
        else if(avg>=80) cout<<"Average: "<<avg<<"% "<<letGrad[3]<<endl;
        else if(avg>=70) cout<<"Average: "<<avg<<"% "<<letGrad[2]<<endl;
        else if(avg>=60) cout<<"Average: "<<avg<<"% "<<letGrad[1]<<endl;
        else cout<<"Average: "<<avg<<"% "<<letGrad[0]<<endl;
    }
    cout<<endl;

    return 0;
}

