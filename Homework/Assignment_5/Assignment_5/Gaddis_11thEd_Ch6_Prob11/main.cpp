/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 12, 2015, 3:48 AM
 * Purpose: Lowest Score Dropped
 */

#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
 
 //Global Constants
  
 //Function Prototypes
int getScor(int, int, int& total);
float Average(int, int);
int Lowest (int scoreArray[5]);
 //Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    int array[5];
    int test = 0;
    float avg = 0.0f;
    int lowest = 0;
    int total = 0;

    for (int counter = 1; counter <= 5; counter++)
    {
            test = getScor (test, counter, total);
            array[counter - 1]=test;
    }
    lowest = Lowest(array);
    avg = Average(lowest, total);
    cout<<"The lowest score dropped was "<<lowest<<endl;
    cout<<"Average is "<<setprecision(2)<<fixed<<avg;

    return 0;
}
/************************************************
******************Average************************
 * Purpose: takes the sum of the 4 largest scores and finds the average
 * Input: lowest, total
 * output: the average
*************************************************/
float Average (int lowest, int total)
{ 
    int sumofFour = 0;
    float avg = 0.0f;
    sumofFour = total - lowest;
    avg = sumofFour / 4.0f;
    return avg;
}
/************************************************
******************Lowest************************
 * Purpose: to find the smallest score
 * Input: array
 * output: smallest score
*************************************************/
int Lowest (int array[5])
{
    int smallest = array[0];
    for ( int counter = 1; counter < 5; counter++)
    {if (array[counter] < smallest)
    smallest = array [counter];
    }
    return smallest;
}
/************************************************
******************getScor************************
 * Purpose: to get the input of the 5 scores
 * Input: test,i,total
 * output: input scores and validate
*************************************************/
int getScor (int test, int i, int &total)
{
    cout<<"Please, enter the score for exam number "<<i<<endl;
    cin>>test;
    
    //Validate input
    while (test<0 || test>100)
    {
        cout<<"Please a valid score. Try again "<<endl;
        cin>>test;
    }
    total+=test;

return test;
}