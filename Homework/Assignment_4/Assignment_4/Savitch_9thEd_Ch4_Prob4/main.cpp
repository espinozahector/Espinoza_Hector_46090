/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 9, 2015, 4:06 PM
 * Purpose:"Nintey-Nine Bottles of beer on the wall"
 */

#include <cstdlib>
#include <iostream>
using namespace std;
string getWholeNum(int);
string getFirstNum(int);
string getSecondNum(int);
string getTeens(int);
/*
 * 
 */
int main(int argc, char** argv) {
    for(int i=99; i>0; i--){
        if(i!=99)cout<<getWholeNum(i)<<" bottles of beer on the wall.\n";
        cout<<getWholeNum(i)<<" bottles of beer on the wall\n";
        cout<<getWholeNum(i)<<" bottles of beer\n";
        cout<<"You take one down pass it around\n";
    }
    cout<<"No more bottles of beer on the wall.";
    return 0;
}
string getWholeNum(int n){
    string ret="";
    int a=n/10;
    ret += getFirstNum(a);
    a=n%10;
    if(ret=="Special"){
        ret=getTeens(n);
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
