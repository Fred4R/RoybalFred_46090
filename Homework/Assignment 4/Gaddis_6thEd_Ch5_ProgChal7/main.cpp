/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 13, 2015, 9:35 AM
 * Purpose: Homework. Calculate pay based on time and pennies being doubled
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    
    int Time;
    int TimeEnt;
    float TtlMade;
    float Penny=.01;
    float Salary=.01;
    
    
    cout<<"This program will calculate how much you would earn if you earned";
    cout<<" a penny and for every day that passed you";
    cout<<" earned double the amount"<<endl;
    
    cout<<"Please enter the amount of days you wish to calculate"<<endl;
    cin>>TimeEnt;
    
    cout<<"Day     Salary    Total Made"<<endl;
    cout<<"****************************"<<endl;
    
    for(Time=0;Time<=TimeEnt;Time++,Salary=Salary*2,TtlMade+=Salary){
        
        cout<<fixed<<showpoint<<setprecision(2)<<endl;
        cout<<Time<<"       "<<Salary<<"   $"<<TtlMade<<endl;
    }
    
    return 0;
}

