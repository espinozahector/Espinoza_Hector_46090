/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 22, 2015, 12:43 PM
 * Purpose: Chips and salsa
 */

#include <iostream>
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int low=99999;
    int lowP=0;
    int high=0;
    int highP=0;
    const int SIZE=5;
    unsigned short nums[SIZE];
    string flavor[5]={"Mild","Medium","Sweet","Hot","Zesty"};
    for(int i=0;i<5;i++){
    cout<<"Input the number of jars sold for "<<flavor[i]<<endl;
    cin>>nums[i];
    }
    cout<<endl;
    
        
    for(int j=0;j<5;j++){
        cout<<"The number of Jars sold for "<<flavor[j]<<" was "<<nums[j]<<endl;
        
    }
    for(int c=0;c<SIZE;c++){
          if(nums[c]<low)
        {
          low=nums[c];lowP=c;  
        }
    }
    cout<<flavor[lowP]<<" sold the least with "<<low<<" Jars."<<endl;

       for(int c=0;c<SIZE;c++){
          if(nums[c]>high)
        {
          high=nums[c];highP=c;  
        }
    }
    cout<<flavor[highP]<<" sold the most with "<<high<<" Jars."<<endl;

    return 0;
}

