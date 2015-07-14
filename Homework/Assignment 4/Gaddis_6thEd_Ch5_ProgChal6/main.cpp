/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 13, 2015, 9:11 AM
 * Purpose: Homework. Calculate distance based off of user entered speed and
 * time.
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int Rate;
    int Time;
    int Counter;
    
    cout<<"Please enter the speed of the vehicle's mph in positive whole";
    cout<<" numbers"<<endl;
    cin>>Rate;
    cout<<"Enter a positive number for the amount of time the vehicle";
    cout<<"has been traveling"<<endl;
    cin>>Time;
    cout<<" "<<endl;
    
    cout<<"Hour     Distance Traveled"<<endl;
    cout<<"=========================="<<endl;
    
    for(Counter;Counter<=Time;Counter++){
        
        cout<<Counter<<"    "<<Rate*Counter<<endl;
    }

    return 0;
}

