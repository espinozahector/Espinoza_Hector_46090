/* 
 * File:   main.cpp
 * Author: Junior
 *
 * Created on July 15, 2015, 10:20 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int n;
    //Input value
    cout<<"Input your odd number: ";
    cin>>n;
    
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
    return 0;
}
