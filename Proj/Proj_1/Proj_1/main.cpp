//http://fischerlaender.de/development/using-boost-c-libraries-with-gcc-g-under-windows
#include <iostream>
#include <string>
#include <cstdlib>
#include <boost/regex.hpp>
#include <iomanip>
#include <vector>
using namespace std;
using namespace boost;
void printCards(vector<unsigned short>);
void shuffle(vector<unsigned short>&,int);
void grabCards(vector<unsigned short>);

int main() {
    const int SIZE=52;
    vector<unsigned short> cards;
    srand(time(0));
    for(int i=0; i<SIZE; i++){
        
        cards.push_back (i%13+1);
       
    }
    printCards(cards);
    shuffle(cards,SIZE);
    printCards(cards);
    
    return 0;
}

void printCards(vector<unsigned short> v){
    for(int i=0; i<v.size(); i++){
        if(i%13==0)cout<<"\n";
        cout<<setw(2)<<v[i]<<" ";
       
    }
}

void shuffle(vector<unsigned short> &v,int s){
   
    for(int i=0 ; i< s*3 ; i++){
        int pos1 = rand()%s;
        int pos2 = rand()%s;
        unsigned short temp = v[pos1];
        v[pos1]=v[pos2];
        v[pos2]=temp;
    }
}
void grabCards(vector<unsigned short> c){
    
    
    
    
}