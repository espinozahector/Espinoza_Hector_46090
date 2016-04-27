/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on June 29, 2015, 12:43 PM
 * Purpose: To show the truth
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
    bool x,y;
    
    //Output the heading of the table
    cout<<"The Truth Table"<<endl;
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)Y";
    cout<<" (X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //Row 1 Output
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(((x^y)^y)?'T':'F')<<"  ";
    cout<<(((x^y)^x)?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<"  ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<"  ";
    cout<<((!x&&!y)?'T':'F')<<endl;
    
    //Row 2 Output
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(((x^y)^y)?'T':'F')<<"  ";
    cout<<(((x^y)^x)?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<"  ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<"  ";
    cout<<((!x&&!y)?'T':'F')<<endl;
    
    //Row 3 Output
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(((x^y)^y)?'T':'F')<<"  ";
    cout<<(((x^y)^x)?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<"  ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<"  ";
    cout<<((!x&&!y)?'T':'F')<<endl;
    
    //Row 4 Output
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(((x^y)^y)?'T':'F')<<"  ";
    cout<<(((x^y)^x)?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<"  ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<"  ";
    cout<<((!x&&!y)?'T':'F')<<endl;
    
  
    return 0;
}

