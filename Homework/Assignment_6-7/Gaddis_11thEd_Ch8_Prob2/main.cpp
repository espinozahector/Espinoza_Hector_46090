/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 23, 2015, 12:04 PM
 * Purpose: Lottery Winners
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int search(int[],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;  //Size of the array
    int tickets[SIZE]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    int winner;         //The winning number for the week   
    int results;        //Results gives the position of the number in the array
    
    //Input the value for winning
    cout<<"Input the winning number for this week: ";
    cin>>winner;
    cout<<endl;
    //Call the search functiom
    results=search(tickets,SIZE,winner);
    //If else to output the results
    if(results==-1){
        cout<<"You did not win this week, try again next week."<<endl;
    }
    else{
        cout<<"You win!!!";
        cout<<"Your winning number is "<<tickets[results]<<endl;
    }
   //Exit Stage Right!
    return 0;
}
/**************************************************
 *             Search Function                    *
 **************************************************
 * Purpose:  Uses linear search to find if winning number
 * Input:
 *    tickets->array of ticket numbers
 *      SIZE->size of the array
 *      winner->winning number 
 * Output:
 *    position->position of the winning number
 */
int search(int tickets[],int SIZE,int winner){
    int index=0;
    int position= -1;
    bool found =false;
    for(int i=0;i<SIZE && !found;i++){
        if(tickets[i]==winner){
            position=i;
            found=true;
        }
    }return position;
}

