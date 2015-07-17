/* 
 * File:   main.cpp
 * Author: Junior
 *
 * Created on July 14, 2015, 3:51 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
            default:;
        };
    }while(inN<7);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;//done
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;//done
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    cout<<"In problem # 1"<<endl<<endl;
}

//Solution to problem 2
void problem2(){
    //Declare Variables
    int SIZE=5;
    char number[SIZE];
    int star;
    //Input the 4 digits
    cout<<"Input a 4 digit code"<<endl;
    cin>>number;
    //Uses ascii code in a for loop to eliminate other characters
    for(int counter=3;counter>=0;counter--){
        cout<<number[counter]<<' ';
        if(number[counter]<=48 || number[counter]>=58){
            cout<<'?';
        }
        else{
            star=number[counter]-48;
            for(int counter2=0;counter2<star;counter2++){
                cout<<'*';
            }
        }
        cout<<endl;
    }

    cout<<"In problem # 2"<<endl<<endl;
}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
}

//Solution to problem 4
void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
}

//Solution to problem 5
void problem5(){
    float hours,
          pay,
          gross;
    cout<<"Input the number of hours you worked this week: ";
    cin>>hours;
    cout<<"Input your pay per hour: $";
    cin>>pay;
    
    if(hours<=20){
        gross=hours*pay;
        cout<<"Your total gross pay: $"<<gross<<endl;
    }
    if(hours>=21 && hours<=40){
        gross=(((hours-20)*(pay*1.5))+(20*pay));
        cout<<"Your total gross pay: $"<<gross<<endl;
    }    
    if(hours>40){
        gross=((pay*20)+((pay*1.5)*20)+((pay*2)*(hours-40)));
        cout<<"Your total gross pay: $"<<gross<<endl;   
    }
    cout<<"In problem # 5"<<endl<<endl;
}

//Solution to problem 6
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}