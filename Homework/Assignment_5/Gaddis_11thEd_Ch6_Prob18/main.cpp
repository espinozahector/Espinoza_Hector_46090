/* 
 * File:   main.cpp
 * Author: Hector Espinoza
 * Created on July 12, 2015, 3:48 AM
 * Purpose: Lowest Score Dropped
 */

#include <iostream>

using namespace std;

void displayCost(int, float, float);
int numRooms(unsigned int);
int numGals(float);
float laborHrs(float);
float wallArea();
float paintPrice(float);

int main(int argc, char** argv){
    
    float xprice =0.3;
    int job=0;
    float total=wallArea();
    float gallons=numGals(total);
    float hours = laborHrs(total);

    return 0;
}

    int numRooms(int rooms){
        cout<<"Please enter the number of rooms: ";
        cin>>rooms;
      
        
        return rooms;
	}

float paintPrice(float price){
    cout << "Please enter the price per gallon: ";
    cin >> price;
    return price;
  }

float wallArea(){
        float r1, r2, r3, r4, total;
        cout << "Please enter the square feet of wall space for each room: " << endl;
        cout << "Room 1: ";
        cin >> r1;
        cout << "Room 2: ";
        cin >> r2;
        cout << "Room 3: ";
        cin >> r3;
        cout << "Room 4: ";
        cin >> r4;
        total = r1 + r2 + r3 + r4;
      return total;
}

int numGals(float gals){

        float gallons;
        gallons= gals/160;
        cout<<"The number of gallons of paint required "<<gallons<<" gallons"<<endl;
        return gallons;
}

float laborHrs(float hrs){

        float labor;
        labor=(hrs/160)*3;
        cout<<"The hours of labor required: "<<labor<<" hours"<<endl;
        return labor;
}

void displayCost(int job, float paint, float labor){

        float paintCost;
        float laborCost;
        int jobCost;

        paintCost=(paint*25.50);
        cout<<"Total cost of paint: $"<<paintCost<<endl;
        laborCost=(labor*28.00);
        cout <<"Total cost of labor: $"<<laborCost<<endl;
        jobCost=(paintCost + laborCost);
        cout<<"Total cost of job: $"<<jobCost<<endl;
}