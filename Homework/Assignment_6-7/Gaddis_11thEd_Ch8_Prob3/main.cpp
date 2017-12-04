/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 23, 2015, 1:12 PM
 * Purpose: Lottery Winners Modification
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void sortAray(int [],int);
int search(int[],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;  //Size of the array
    int tickets[SIZE]={33445,93121,55555,79422,62483,26792,77777,26791,85647,13579};
    int winner;         //The winning number of the ticket for the week
    int results;        //The location of the winning ticket
    
    //Input the value
    cout<<"Input the winning number for this week: ";
    cin>>winner;
    cout<<endl;
    
    sortAray(tickets,SIZE);  
    results=search(tickets,SIZE,winner);
    
    //Use an if else to display if the player won or not
    if(results==-1){
        cout<<"You did not win this week, try again next week."<<endl;
    }
    else{
        cout<<"You win!!!";
        cout<<"Your winning number is "<<tickets[results]<<endl;
    }
   //Exit Stage Right!
    return 0;
}/**************************************************
 *              Sort Array                 *
 **************************************************
 * Purpose: To sort the array 
 * Input:
 *    tickets->array of ticket numbers
 *      SIZE->size of the array
 * Output:
 *    tickets->sorted
 */
void sortAray(int tickets[],int SIZE){
   bool swap;
    int temp;
    
    do{ 
        swap=false;
    for(int i=0;i<(SIZE-1);i++){
        if(tickets[i]>tickets[i+1]){
            temp=tickets[i];
            tickets[i]=tickets[i+1];
            tickets[i+1]=temp;
            swap=true;
         }
        }
    }while(swap);
}
/**************************************************
 *             Search Function                    *
 **************************************************
 * Purpose:  Uses binary search to find if winning number
 * Input:
 *    tickets->array of ticket numbers
 *      SIZE->size of the array
 *      winner->winning number 
 * Output:
 *    position->position of the winning number
 */
int search(int tickets[],int SIZE,int winner){
    //Declare Variables
    int first=0,
        last=SIZE-1,
        middle,
        position=-1;
    bool found=false;
    
    while(!found && first<=last){
        middle=(first+last)/2;
        if(tickets[middle]==winner){
            found=true;
        position=middle;
    }
    else if(tickets[middle]>winner){
        last=middle-1;
    }
    else 
        first=middle+1;
        }
    return position;
}

