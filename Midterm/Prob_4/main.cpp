/* 
 * File:   main.cpp
 * Author: Junior
 *
 * Created on July 14, 2015, 4:25 PM
 */

#include <iostream>
#include <cstring>

using namespace std;

//Function to calculate savings
int savings(int,char);

int main(int argc, char** argv) {
    
    char choice;
    float hours;
    float total;
    
    cout<<"What package do you have?"<<endl;
    cout<<"a)  $16.85 per month, 5 hours access. "<<endl;
    cout<<"     Additional hours are $0.80 up to 20 hours then $1 for all additional ";
    cout<<"hours."<<endl;
    cout<<"b)  $23.85 per month, 15 hours access. "<<endl;
    cout<<"     Additional hours are $0.65 up to 25 hours then $0.70 for each ";
    cout<<"hour above this limit."<<endl;
    cout<<"c)  $29.55 per month unlimited access."<<endl;
    
    cin>>choice;
    cout<<"How many hours? ";
    cin>>hours;
    
    switch (choice){
        case 'a': 
            if(hours<=5){
                cout<<"Monthly charge = $16.85 per month"<<endl;
            }
            if(hours>5&&hours<=20){
                total=(hours-5)*.80;
                total=total+16.85;
                cout<<"Monthly charge = $"<<total<<endl;
            }
            if(hours>20){
                total=(15*.80)+((hours-20)*1.0);
                total=total+16.85;
                cout<<"Monthly charge = $"<<total<<endl;
            }
        case 'b':
            if(hours<=15){
                cout<<"Monthly charge = $23.85 per month"<<endl;
            }
            if(hours>15&&hours<=25){
                total=(hours-15)*.65;
                total=total+23.85;
                cout<<"Monthly charge = $"<<total<<endl;
            }
            if(hours>25){
                total=(15*.65)+((hours-25)*.70);
                total=total+23.85;
                cout<<"Monthly charge = $"<<total<<endl;
            }
        case 'c':
                cout<<"Monthly charge = $29.55 per month"<<endl;

    }



//    string date;
//    string payee;
//    int amount;
//    string holder;
//    cout<<"Input the date of the check: ";
//    cin>>date;
//    cin.ignore();
//    cout<<"Input the name of the payee: ";
//    
//    cin>>payee;
//    cout<<"Input the dollar amount in usd: ";
//    cin>>amount;
//    cout<<"Input the account holder: ";
//    cin>>holder;
//    cout<<endl;
//    
//    cout<<date<<endl;
//    cout<<payee<<endl;
//    cout<<amount<<endl;
//    cout<<holder<<endl;
//    
    return 0;
}
int savings(int hours){
    //Calculate them all to determine which is best
    //Plan A
    int planA,
        planB,
        planC;
    
    //Calculate which plan that is best
    planA=(15*.80)+((hours-20)*1.0)+16.85;
    planB=(15*.65)+((hours-25)*.70)+23.85;
    planC=29.55;
    if(planA<planB && planA<planC){
        planA=planA-planB;
        cout<<"Plan A is the best choice for you"<<endl;
        cout<<"You save: $"<<planA<<endl;
    }
    if(planB<planA && planB<planC){
        planB=planB-planA;
        cout<<"Plan B is the best choice for you"<<endl;
        cout<<"You save: $"<<planB<<endl;
    }
    if(planC<planA && planC<planB){
        planC=planC-planA;
        cout<<"Plan C is the best choice for you"<<endl;
        cout<<"You save: $"<<planC<<endl;
    }
}

