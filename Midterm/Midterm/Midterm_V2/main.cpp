/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 14, 2015, 3:51 PM
 * Purpose: Midterm
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
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
void display();//For problem 4

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
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
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
    //Declare Variables
    unsigned int n; //n is the number
    //Input value
    cout<<"Input any odd number: ";
    cin>>n;
    //Using for loops and setw to determine the value and the spacing
    for(int i=1,j=n;i<=n;i++,j--){
           if(j>i){
            cout<<setw(i)<<i;
            cout<<setw(j-i)<<j<<endl;
           }else if(j==i){
               cout<<setw(j)<<j<<endl;
           }else{
               cout<<setw(j)<<j;
               cout<<setw(i-j)<<i<<endl; 
           }
    }

}

//Solution to problem 2
void problem2(){  
    cout<<"In problem # 2"<<endl<<endl;
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

}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
    //Declare Variables Here
    short amount, a, b, c, d, n;
    string  Date,       
            first, 
            last, 
            fhold, 
            lhold;
    const int SIZE=25;
    
    //Input the data
    cout<<"Input the date: ";
    cin>>Date;
    cout<<"Input the name of payee: ";
    cin>>first>>last;
    cout<<"Input the amount: ";
    cin>>amount;
    cout<<"Input the account holders name: ";
    cin>>fhold>>lhold;
    
    //Output the check
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<fhold<<" "<<lhold<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE  ZIP                                    "<<Date<<endl;
    cout<<endl;
    cout<<"Pay to the Order of: "<<first<<" "<<last<<endl;
    cout<<endl;
    
    //If statement to cout the dollar amount in words
    if(amount>=1000){
        cout<<"The dollar amount is too high for this check"<<endl;
    }
    else if(amount>=100){
        {
        a=amount/100;
        n=0;
            if(a==9)cout<<"Nine";
            else if(a==8)cout<<"Eight";
            else if(a==7)cout<<"Seven";
            else if(a==6)cout<<"Six";
            else if(a==5)cout<<"Five";
            else if(a==4)cout<<"Four";
            else if(a==3)cout<<"Three";
            else if(a==2)cout<<"Two";
            else if(a==1)cout<<"One";
	    cout<<" Hundred and ";
        }
        amount=amount%100;
    }if(amount>=20){
        {
        b=amount/10;
        n=0;
            if(b==9)cout<<"Ninety";
            else if(b==8)cout<<"Eighty";
            else if(b==7)cout<<"Seventy";
            else if(b==6)cout<<"Sixty";
            else if(b==5)cout<<"Fifty";
            else if(b==4)cout<<"Forty";
            else if(b==3)cout<<"Thirty";
            else if(b==2)cout<<"Twenty";
            cout<<"-";
        }
        amount=amount%10;
    }if(amount>=1){
        {
        c=amount;
        n=0;
            if(c==19)cout<<"Nineteen";
            else if(c==18)cout<<"Eighteen";
            else if(c==17)cout<<"Seventeen";
            else if(c==16)cout<<"Sixteen";
            else if(c==15)cout<<"Fifteen";
            else if(c==14)cout<<"Fourteen";
            else if(c==13)cout<<"Thirteen";
            else if(c==12)cout<<"Twelve";
            else if(c==11)cout<<"Eleven";
            else if(c==10)cout<<"Ten";
            else if(c==9)cout<<"Nine";
            else if(c==8)cout<<"Eight";
            else if(c==7)cout<<"Seven";
            else if(c==6)cout<<"Six";
            else if(c==5)cout<<"Five";
            else if(c==4)cout<<"Four";
            else if(c==3)cout<<"Three";
            else if(c==2)cout<<"Two";
            else if(c==1)cout<<"One";
        }
        amount=amount%1;
    }
    cout<<" and no/100s Dollars"<<endl;
    cout<<endl;
    cout<<"BANK OF CSC5"<<endl;
    cout<<endl;
    cout<<"FOR: GOTTA PAY THE RENT                        "<<fhold<<" "<<lhold<<endl;
    cout<<endl;
    cout<<"****************************************************"<<endl;
}

//Solution to problem 4
void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
    
    //Declare Variables
    unsigned short hours;    
    char           package;  
    float          total;  
    float          save;     
    
    //Call prop function and ask for which one they want
    display();
    cout<<"How many hours? ";
    cin>>hours;
    cout<<"What Package do you have (a,b,or c)? ";
    cin>>package;
    cout<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    //Results depending of which package(Package a)
    if(package=='a'||package=='A'){
        float cost=16.85;
        if(hours<=5){
            total=cost;
            cout<<"Your total cost is: $"<<total<<" per month"<<endl;
        }else if(hours>5&&hours<=20){
            total=cost+(.8*(hours-5));
            cout<<"Your total cost is: $"<<total<<" per month"<<endl;
            if(hours>=14&&hours<=15){
                save=total-(23.85);
                cout<<"You will save: $"<<save<<" by switching to package b"<<endl;
            }
            if(hours>15&&hours<=20){
                save=total-(23.85+((hours-15)*.65));
                cout<<"You will save: $"<<save<<" by switching to package b"<<endl;
                }
        }else if(hours>20){
            total=cost+(.8*(20-5))+(hours-20);
            cout<<"Your total cost is: $"<<total<<" per month"<<endl;
            if(hours>=21&&hours<=23){
                save=total-(23.85+((hours-15)*.65));
                cout<<"You will save: $"<<save<<" by switching to package b"<<endl;
            }else if(hours>=24){
                save=total-29.55;
                cout<<"You will save: $"<<save<<" by switching to package c"<<endl;
            }
        }
    }
    //Package b
    if(package=='b'||package=='B'){
        float cost=23.85;
        if(hours<=15){
            total=cost;
            cout<<"Your total cost is: $"<<total<<" per month"<<endl;
            if(hours<=13){
                save=total-(16.85+(.8*(hours-5)));
                cout<<"You will save: $"<<save<<" by switching to package a"<<endl;
            }
        }else if(hours>15&&hours<=25){
            total=cost+((hours-15)*.65);
            cout<<"Your total cost is: $"<<total<<" per month"<<endl;
            if(hours>=24&&hours<=25){
                save=total-29.55;
                cout<<"You will save: $"<<save<<" by switching to package c"<<endl;
            }
        }else if(hours>25){
            total=cost+((25-15)*.65)+((hours-25)*.7);
            cout<<"Your total cost is: $"<<total<<" per month"<<endl;
            save=total-29.55;
            cout<<"You will save: $"<<save<<" by switching to package c"<<endl;
        }
    }
    //Package c
    if(package=='c'||package=='C'){
        float cost=29.55;
        cout<<"Your total cost is: $"<<cost<<" per month"<<endl;
        if(hours<=13){
            save=cost-(16.85+(.8*(hours-5)));
            cout<<"You will save: $"<<save<<" by switching to package a"<<endl;
        }else if (hours>=14&&hours<=15){
            save=cost-23.85;
            cout<<"You will save: $"<<save<<" by switching to package b"<<endl;
        }else if(hours>=16&&hours<=23){
            save=cost-(23.85+((hours-15)*.65));
            cout<<"You will save: $"<<save<<" by switching to package b"<<endl;
        }
    }
   
}

//Solution to problem 5
void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
    float hours,//hours worked
          pay,  //hourly pay rate
          gross;//gross income without taxes
    cout<<"Input the number of hours you worked this week: ";
    cin>>hours;
    cout<<"Input your pay per hour: $";
    cin>>pay;
    //if else to determine flat pay, time and a half, or double
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
    
}

//Solution to problem 6
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
    //Declare Variables 
    float     terms, //The number of terms
              X,     //The x value
            sum=0;   //The sum of them all 
    
    //Input the values 
    cout<<"Enter the number of terms"<<endl;
    cin>>terms;
    cout<<"Enter an X Value"<<endl;
    cin>>X;
    cout<<endl;
    
    //loop to find the sum.
    for(int i=0;i<terms;i++){
        //The Sum
         sum+=(terms)/(pow(X,i));
         terms--;
        }   
    //Output the sum
    cout<<fixed<<setprecision(2);
    cout<<"The Total Sum: "<<sum<<endl;
    cout<<endl;
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
void display(){
   //Let user know about their options
   cout<<"An ISP has 3 different subscription packages:"<<endl;
   cout<<"      a)  $16.85 per month, 5 hours access."<<endl;
   cout<<"           Additional hours are $0.80 up to 20 hours"<<endl;
   cout<<"           then $1 for all additional hours."<<endl;
   cout<<"      b)  $23.85 per month, 15 hours access."<<endl;
   cout<<"           Additional hours are $0.65 up to 25 hours"<<endl;
   cout<<"           then $0.70 for each hour above this limit."<<endl;
   cout<<"      c)  $29.55 per month unlimited access."<<endl;
   cout<<endl;
}