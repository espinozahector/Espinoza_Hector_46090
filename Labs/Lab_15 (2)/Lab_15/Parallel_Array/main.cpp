/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 15, 2015, 12:42 PM
 * 
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    const int ROW=10;
    int array[ROW];
    int array2[ROW];
    
    cout<<setw(4)<<"  N   N^2"<<endl;
    cout<<"**********"<<endl;
    for(int i=0;i<ROW;i++){
        
        array[i]=i+1;
        array2[i]=(array[i])*array[i];
        cout<<setw(3)<<array[i];
        cout<<setw(5)<<array2[i];
        cout<<endl;
        
    }
    

    return 0;
}

