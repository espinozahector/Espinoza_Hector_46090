/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 29, 2015, 12:43 PM
 * Purpose: To show how to swap
 */

//System Libraries
#include <iostream>

using namespace std;

/*//User Libraries
 * 
 * //Global Constants
 * 
 * Function Prototypes
 * 
 * //Execution Begins Here!
 */
int main(int argc, char** argv) {
    //Declare Variables
    int a,b;
    int min=10,max=100;
   
    //In put the values for a and b
    cout<<"Input 2 Integer Values between "<<min<<" and ";
    cout<<max<<endl;
    cin>>a>>b;
    
    //Validate the result
    if(a>=10 && a<=100 && b>=10 && b<=100){
        //Prompt the user or which swap
        cout<<"What swap would you like to choose?"<<endl;
        cout<<"Storage --> s or in-place --> i"<<endl;
        //Declare the variable type
        char type;
        cin>>type;
        switch(type){
            case 's':{
                int temp=a;
                a=b;
                b=temp;
                cout<<"Type a visible due to scope!"<<endl;
                cout<<"Type = "<<type<<endl;
                break;
            }
            case 'i':{
                a=a^b;
                b=a^b;
                a=a^b;
                }
            default: cout<<"You don't follow instructions"<<endl;
            cout<<"Values not between range given"<<endl;
            cout<<"You didn't type an s or an i"<<endl;
            return 1;
          
       }
    
    }else{
        cout<<"You don't follow instructions"<<endl;
        cout<<"No swap for you"<<endl;
    }
    
    //output the results for the swap
    cout<<"Old a = "<<b<<", new a = "<<a<<endl;
    cout<<"Old b = "<<a<<", new b = "<<b<<endl;
    //cout<<temp<<endl;  // scope/visibility error
    //cout<<type<<endl;  // scope/visibility error

    //Exit stage right!
    return 0;
}

