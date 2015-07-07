/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 1, 2015, 1:16 PM
 * Purpose: Homework. Rewrite a program with proper style 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here!

int main(){
    //Declare Variables Here
    double radius,vm;                    //The radius of a sphere and its volume
    
    //Input Values Here
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;                         //User inputs value for radius
    
    //Process Input Here
    vm=(4.0/3.0)*3.1415*radius*radius*radius;//Calculation for volume of sphere
    
    //Output Unknowns Here
    cout<<" The volume is "<<vm<<endl;
    
    //Exit Stage Right!
    return 0;
}

