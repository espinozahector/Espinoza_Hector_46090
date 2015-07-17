/* 
 * File:   main.cpp
 * Author: Junior
 *
 * Created on July 15, 2015, 7:29 PM
 */

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

string getWholeNum(int);
string getHundreds(int);
string getFirstNum(int);
string getSecondNum(int);
string getTeens(int);

int main(int argc, char** argv) {
    string date;
    string First,Last;
    float n;
    cout<<"Input the date of the check: ";
    cin>>date;
    cout<<"Input the name of the payee: ";
    
    cin>>First>>Last;
    cout<<"Input the dollar amount in usd: ";
    cin>>n;
    cout<<endl;
    
    cout<<"Check"<<endl;
    cout<<First<<" "<<Last<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE ZIP                "<<"DATE: "<<date<<endl;
    cout<<endl;
    cout<<"Pay to the Order of: "<<First<<Last<<endl;
    cout<<endl;
    cout<<getWholeNum(n)<<endl;
    cout<<endl;
    cout<<"BANK OF CSC5"<<endl;
    cout<<endl;
    cout<<"FOR: GOTTA PAY THE RENT         "<<First<<" "<<Last<<endl;
    

    return 0;
}

string getWholeNum(int n){
    string ret="";
    int a=n/10;
    ret += getHundreds(n);
    a=n%10;
    ret+= getFirstNum(n);
    if(ret=="Special"){
        ret=getFirstNum(n);
    }if(ret=="No num"){
        string temp = getSecondNum(a);
        ret ="";
        for(int i=1; i<temp.size(); i++){
            ret+=temp[i];
        }
    }else{
    ret+=getSecondNum(a);
    }
    if(n==0)return "Zero";
    return ret;
}

string getFirstNum(int n){
    
    if(n==1){
        return "Special";
    }if(n==2){
        return "Twenty";
    }if(n==3){
        return "Thirty";
    }if(n==4){
        return "Fourty";
    }if(n==5){
        return "Fifty";
    }if(n==6){
        return "Sixty";
    }if(n==7){
        return "Seventy";
    }if(n==8){
        return "Eighty";
    }if(n==9){
        return "Ninety";
    }
    return "No num";
}
string getSecondNum(int n){
    if(n==0){
        return "";
    }if(n==1){
        return "-One";
    }if(n==2){
        return "-Two";
    }if(n==3){
        return "-Three";
    }if(n==4){
        return "-Four";
    }if(n==5){
        return "-Five";
    }if(n==6){
        return "-Six";
    }if(n==7){
        return "-Seven";
    }if(n==8){
        return "-Eight";
    }if(n==9){
        return "-Nine";
    }
    return "no num";
}

string getTeens(int n){
    if(n==10){
        return "Ten";
    }
    if(n==19){
        return "Nineteen";
    }
    if(n==18){
        return "Eighteen";
    }
    if(n==17){
        return "Seventeen";
    }
    if(n==16){
        return "Sixteen";
    }
    if(n==15){
        return "Fifteen";
    }
    if(n==14){
        return "Fourteen";
    }
    if(n==13){
        return "Thirteen";
    }
    if(n==12){
        return "Twelve";
    }
    if(n==11){
        return "Eleven";
    }
}

string getHundreds(int n){
    if(n==100){
        return "One Hundred and";
    }
    if(n==200){
        return "Two Hundred and";
    }
    if(n==300){
        return "Three Hundred and";
    }
    if(n==400){
        return "Four Hundred and";
    }
    if(n==500){
        return "Five Hundred and";
    }
    if(n==600){
        return "Six Hundred and";
    }
    if(n==700){
        return "Seven Hundred and";
    }
    if(n==800){
        return "Eight Hundred and";
    }
    if(n==900){
        return "Nine Hundred and";
    }
    if(n==1000){
        return "One thousand and";
    }
}