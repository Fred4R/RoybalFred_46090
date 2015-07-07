/* 
 * File:   main.cpp
 * Author: Fred Roybal
 * Created on July 6, 2015, 8:13 PM
 * Purpose: Homework. Check if room occupancy exceeds legal limit
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variables
    unsigned int TtlPeop;             //Total amount of people in a room
    unsigned int LegalLmt=100;        //Legal room occupancy limit
    
    //Prompt for entry
    cout<<"The legal occupancy of this room is 100 people"<<endl;
    cout<<"Please enter the number of people in the room"<<endl;
    cin>>TtlPeop;
    
    //Output Unknowns
    if(TtlPeop<=LegalLmt){
        cout<<"This amount of people in the room is legal and ";
        cout<<LegalLmt-TtlPeop<<" can still come in"<<endl;
    }else{
        cout<<"This amount of people in the room is illegal and ";
        cout<<TtlPeop-LegalLmt<<" have to come out of the room"<<endl;
        
    }
    
    return 0;
}

