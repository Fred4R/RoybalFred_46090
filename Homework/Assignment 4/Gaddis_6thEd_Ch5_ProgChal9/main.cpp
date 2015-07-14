/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 13, 2015, 4:10 PM
 * Purpose: Homework. Calculate approximate population growth
 * Unsuccessful, math is off
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int Days;
    float Growth;
    int Counter;
    float Current;
    float Added;
    
    cout<<"Enter the starting amount of organisms that is more than 2"<<endl;
    cin>>Current;
    cout<<"Please enter the percent of growth of the organisms as a decimal";
    cout<<" "<<endl;
    cin>>Growth;
    cout<<"Please enter the number of days it will grow"<<endl;
    cin>>Days;
 
    for(Counter=0;Counter<=Days;Counter++,Added=Added+(Current*Growth)){
        
        cout<<"Day:"<<Counter<<"    Current Population:"<<Current+Added<<endl;
       
    }
    return 0;
}


