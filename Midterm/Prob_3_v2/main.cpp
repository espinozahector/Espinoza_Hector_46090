/* 
 * File:   main.cpp
 * Author: rccacm
 *
 * Created on July 16, 2015, 5:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

string hundreds(int);
string first(int);
string second(int);
string cents(int,int);
string getWholeNum(int);

int main(int argc, char** argv) {
    //Declare variables
    string Name;
    string Date;
    float n;
    string holder;
    
    cout<<"Input the date: "<<endl;
    cin>>Date;
    cout<<"Input the name: ";
    cin>>Name;
    cin.ignore();
    getline(cin,Name);
    cout<<"Input the amount in usd $";
    cin>>n;
    cout<<"Input the name of the holder: ";
    cin>>holder;
    getline(cin,holder);
    
    //123.55
    int d=n;//123
    int c=(n-d)*100;//.55
    
    cout<<getWholeNum(n);
   
    
    return 0;
}
string getWholeNum(int n){
    n=(n/10);
    string whole;
}

string hundreds(int a){
  if(a==100){return "One Hundred and";}
  if(a==200){return "Two Hundred and";}
  if(a==300){return "Three Hundred and";}
  if(a==400){return "Four Hundred and";}
  if(a==500){return "Five Hundred and";}
  if(a==600){return "Six Hundred and";}
  if(a==700){return "Seven Hundred and";}
  if(a==800){return "Eight Hundred and";}
  if(a==900){return "Nine Hundred and";}
}
string first(int a){
  if(a==0){return "";}
  if(a==1){return "ten";}
  if(a==2){return "twenty";}
  if(a==3){return "thirty";}
  if(a==4){return "forty";}
  if(a==5){return "fifty";}
  if(a==6){return "sixty";}
  if(a==7){return "seventy";}
  if(a==8){return "eighty";}
  if(a==9){return "ninety";}
}
string second(int a){
  if(a==0){return "";}
  if(a==1){return "one";}
  if(a==2){return "two";}
  if(a==3){return "three";}
  if(a==4){return "four";}
  if(a==5){return "five";}
  if(a==6){return "six";}
  if(a==7){return "seven";}
  if(a==8){return "eight";}
  if(a==9){return "nine";}
}
string cents(int &n,int){
    int d=n;
    
    cout<<" cents";
}



