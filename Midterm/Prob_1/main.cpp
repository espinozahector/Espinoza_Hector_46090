/* 
 * File:   main.cpp
 * Author: Junior
 *
 * Created on July 15, 2015, 5:22 PM
 */


#include <iostream>
using namespace std;

int main(int argc, char** argv) {
//Declare Variables 
int X;

cout << "Input a positive number." << endl;
cin >> X; 
cout << endl;

//Input Validation 
while (X<0) {
cout << "Invalid entry. Enter a number greater than 0." << endl;
cin >> X ; 
}

//This section increments 
for(int i = 1, j = X; i > X, j > 0; ++i, --j)
cout << i << " " << j << endl;

return 0;
}
