/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 14, 2015, 1:12 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

//User Libraries
const double MXRND=pow(2,31)-1;
//Global constants

//Function Prototypes
float normal(); //Normal distribution
void prntAry(const float [],int,int);
void filAray(float a[],int n);
float max(float[], int);
float min(float[], int);
float mean(float[], int);
float stdev(float[], int);

//Execution Begins Here!
int main(int argc, char** argv) { 
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    const int SIZE=100;
    float array[SIZE];
    
    //Initialize the array
    filAray(array,SIZE);
    
    //Print the statistics
    cout<<"The max value of the array = "<<max(array,SIZE)<<endl;
    cout<<"The min value of the array = "<<min(array,SIZE)<<endl;
    cout<<"The mean value of the array = "<<mean(array,SIZE)<<endl;
    cout<<"The Standard deviation in the array = "<<stdev(array,SIZE)<<endl;
    //Exit Stage right!
    return 0;
}
/**************************************************
 *         Standard Deviation  of an array        *
 **************************************************
 * Purpose:  Find the mean
 * Input:
 *    n-> The size of the array
 *    a-> The float array
 * Output:
 *    mean value
 */
float stdev(float a[],int n){
    //Declare Variables
    float std=0,avg=mean(a,n);
    //Loop to find the maximum
    for(int i=0;i<n;i++){
        float amavg=(a[i]-avg);
        std+=(amavg* amavg);
    }
    //Return the
    return sqrt(std/(n-1));
}
/**************************************************
 *                Mean of an array                *
 **************************************************
 * Purpose:  Find the mean
 * Input:
 *    n-> The size of the array
 *    a-> The float array
 * Output:
 *    mean value
 */
float mean(float a[],int n){
    //Declare Variables
    float mean=0;
    //Loop to find the maximum
    for(int i=0;i<n;i++){
        mean+=a[i];
    }
    //Return the
    return mean/n;
}
/**************************************************
 *                Max                             *
 **************************************************
 * Purpose:  To fill an array with 2 digit integer
 *           random numbers.
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The integer Array
 * Output:
 */
float max(float a[],int n){

    //Declare Variables
    float max=a[0];
    //Loop to find the maximum
    for(int i=1;i<n;i++){
        if(max<a[i])max=a[i];
    }
    return max;
}
/**************************************************
 *                Max                             *
 **************************************************
 * Purpose:  To fill an array with 2 digit integer
 *           random numbers.
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The integer Array
 * Output:
 */
float min(float a[],int n){
    //Declare Variables
    float min=a[0];
    //Loop to find the maximum
    for(int i=1;i<n;i++){
        if(min>a[i])min=a[i];
    }
    return min;
}

/**************************************************
 *                Fill Array                      *
 **************************************************
 * Purpose:  To fill an array with 2 digit integer
 *           random numbers.
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The integer Array
 * Output:
 */
void filAray(float a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=normal();//[10-99]
    }
}
    
/**************************************************
 *                Print Array                      *
 **************************************************
 * Purpose:  To print an integer array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    a-> The integer Array
 *    nCols->Number of columns to display the array.
 * Output:
 *    On Screen
 */

void prntAry(const float a[],int n,int nCols){
    //Format
    cout<<fixed<<showpoint<<setprecision(4);
    //Separate outputs with a line
    cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<setw(8)<<a[i]<<a[i];
        //When column is reached go to next line
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate outputs with a line
    cout<<endl;
}

/**********************************************************
 *              Normal Distribution Approximation
 **********************************************************
 * Purpose: 
 * Output-> Normal density function approximation
 */
float normal(){
    //Declare Variable
    float norm=0;       //[-6,6]
    //Loop 12 times
    for(int i=1;i<=12;i++){
        norm+=(rand()/MXRND-0.5);//[-.05,.05]
    }
    //Exit and return the norm variable
    return norm;
}