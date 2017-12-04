/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 23, 2015, 2:34 PM
 * Purpose: Charge Account Validation Modification
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
int search(int [],int ,int );
void sortAray(int [],int);

int main(int argv,char *argc[]){
    //initialize array  
    int number;
    int results;
    const int SIZE=18;
    int account[SIZE]={5658845,4520125,7895122,8777541,
                                8451277,1302850,8080152,4562555,
                                5552012,5050552,7825877,1250255,
                                1005231,6545231,3852085,7576651,
                                7881200,4581002};
    
    //Input the account number 
    cout<<"Input the account number: ";
    cin>>number;
    
    sortAray(account,SIZE);
    results=search(account,SIZE,number);
    if(results== -1){
        cout<<"The number you inputed was invalid"<<endl;
    }else{
        cout<<"The number you entered was valid"<<endl;
        cout<<"Your number is: "<<account[results]<<endl;
    }
    //Exit Stage Right!
       return 0;
}
/**************************************************
 *              Sort Array                 *
 **************************************************
 * Purpose: To sort the array 
 * Input:
 *    account->array of ticket numbers
 *      SIZE->size of the array
 * Output:
 *    accounts->sorted
 */

void sortAray(int account[],int SIZE){
    bool swap;
    int temp;
    
    do{ 
        swap=false;
    for(int i=0;i<(SIZE-1);i++){
        if(account[i]>account[i+1]){
            temp=account[i];
            account[i]=account[i+1];
            account[i+1]=temp;
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
 *    accounts->array of ticket numbers
 *    SIZE->size of the array
 *    number->winning number 
 * Output:
 *    position->position of the winning number
 */
int search(int account[],int SIZE,int number){
    //Declare Variables
    int first=0,
        last=SIZE-1,
        middle,
        position=-1;
    bool found=false;
    
    while(!found && first<=last){
        middle=(first+last)/2;
        if(account[middle]==number){
            found=true;
        position=middle;
    }
    else if(account[middle]>number){
        last=middle-1;
    }
    else 
        first=middle+1;
        }
    return position;
}