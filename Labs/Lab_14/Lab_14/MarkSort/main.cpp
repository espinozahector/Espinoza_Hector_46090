/* 
 * File:   main.cpp
 * Author: Manjot Dhindsa
 * Created on July 14, 2015, 12:12 PM
 * Purpose: Simple Sort step by step
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; //std namespace -->iostream

//User Libraries

//Global constants

//Function Prototypes
void filAray(int [],int);
void prntAry(const int [],int,int);
void swap(int &,int &);
void swapMin(int [],int,int);
void markSrt(int[],int);
int linSrch(int[],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=200;
    int    array[SIZE];
    
    //Initialize the array
    filAray(array,SIZE);
    
    //Output the initial array
    prntAry(array,SIZE,20);
    
    //Process the inputs
    markSrt(array,SIZE);
    
    //Output the results
    prntAry(array,SIZE,20);
    
    //Test the search routine
    int value=rand()%90+10;
    int pos=linSrch(array,SIZE,value);
    if(pos==-1)cout<<value<<" was not found!"<<endl;
    else cout<<value<<" was found at array["<<pos<<"]!"<<endl;
    value=0;
    pos=linSrch(array,SIZE,value);
    if(pos==-1)cout<<value<<" was not found!"<<endl;
    else cout<<value<<" was found at array["<<pos<<"]!"<<endl;
    
    //Exit Stage Right!
    return 0;
}

/**********************************************************
 *********************** Fill Array ***********************
 **********************************************************
 * Purpose: To fill an array with two digit 
 *          integer random numbers
 * Input:   
 *          n-> The size of the array
 * Input-Output:
 *          a-> The integer Array
 * Output:
 */
void filAray(int a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;    //[10-99]
    }
}

/**********************************************************
 *********************** Print Array **********************
 **********************************************************
 * Purpose: To print an integer array with any 
 *          number of columns
 * Input:   
 *          n-> The size of the array
 *          a-> The integer Array
 *          nCols-> Number of columns to display the array
 * Output:
 *          On Screen
 */
void prntAry(const int a[],int n,int nCols){
    //Separate output with a line
    cout<<endl;
    //Loop and Output every element in the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        //When column is reached go to next line
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate output with a line
    cout<<endl;
}

/**********************************************************
 *********************** Swap *****************************
 **********************************************************
 * Purpose: To swap by logical operation two values
 * Input-Output:   
 *          a-> an integer value
 *          b-> An integer value
 */
void swap(int &a,int &b){
    //Perform the logical in place swap
    a=a^b;
    b=a^b;
    a=a^b;
}

/**********************************************************
 *********************** SwapMin **************************
 **********************************************************
 * Purpose: To place the minimum at the top of the list.
 * Input: 
 *          n-> The size of the array/list
 *          pos-> Position to place the minimum
 * Input-Output:
 *          a-> An integer array/list
 */
void swapMin(int a[],int n,int pos){
    //Loop through the entire list starting at pos+1
    for(int i=pos+1;i<n;i++){
        //Place smallest value at the position pos
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

/**********************************************************
 ********************* Mark Sort **************************
 **********************************************************
 * Purpose: To short any integer array
 * Input: 
 *          n-> The size of the array
 * Input-Output:
 *          a-> The sorted integer array
 */
void markSrt(int a[],int n){
    //Loop and sort every position
    for(int pos=0;pos<n-1;pos++){
        swapMin(a,n,pos);
    }
}

/**********************************************************
 ********************* :Linear Search *********************
 **********************************************************
 * Purpose: To find where a value resides
 * Input: 
 *          n-> The size of the array
 *          a-> The integer array
 *          val-> The value to search find
 * Output:
 *          Position where value was found
 */
int linSrch(int a[],int n,int val){
    //Loop until value is found
    for(int i=0;i<n;i++){
        //Report back if found
        if(a[i]==val)return i;
    }
    //If not found, then use sentinel
    return -1;
}