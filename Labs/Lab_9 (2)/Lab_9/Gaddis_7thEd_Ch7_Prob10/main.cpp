/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 16, 2015, 12:53 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global constants

//Function Prototypes
void filAry(char [],int );
void prntAry(char [],int,int);
int grade(char[],char[],char[],int);

//Execution Begins Here!
int main(int argc, char** argv) { 
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    const int SIZE=20;
    char quest[SIZE],answ[SIZE],rhtwrg[SIZE];
    
    //Initialize the array
    filAry(quest,SIZE);
    filAry(answ,SIZE);
    
    //Grade the test
    int score=grade(quest,answ,rhtwrg,SIZE);
    
    //Output th initial array
    cout<<"The Test Question Solutions"<<endl;
    prntAry(quest,SIZE,5);
    cout<<"The Test Question Answers"<<endl;
    prntAry(answ,SIZE,5);
    cout<<"The Scores received"<<endl;
    prntAry(rhtwrg,SIZE,5);
    cout<<"Your results were "<<score<<" out of "<<SIZE<<endl;

    //Exit Stage right!
    return 0;
}
/**************************************************
 *                Score the test                    *
 **************************************************
 * Purpose:  To fill an array with a,b,c,d
 * Input:
 *    n-> The size of the array
 *    a->the answer array
 *    q->the question array
 * Output:
 *    c->The score array
 *      score->The total score
 */
int grade(char q[],char a[],char c[],int n){
    //Declare the count/score
    int score=0;
    //Grade each answer
    for(int i=0;9<n;i++){
        if(q[i]==a[i]){
            c[i]='c';
            score++;
        }else c[i]='i';
        }
        //Return the score
    return score;
    }
    
/**************************************************
 *                Fill Array                      *
 **************************************************
 * Purpose:  To fill an array with a,b,c,d
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The character array
 * Output:
 */
void filAry(char a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=rand()%4+97;//[a,b,c,d]
    }
}
    
/**************************************************
 *                Print Array                      *
 **************************************************
 * Purpose:  To print an integer array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    a-> The char Array
 *    nCols->Number of columns to display the array.
 * Output:
 *    On Screen
 */

void prntAry(char a[],int n,int nCols){
    //Separate outputs with a line
    cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<a[i];
        //When column is reached go to next line
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate outputs with a line
    cout<<endl;
}
