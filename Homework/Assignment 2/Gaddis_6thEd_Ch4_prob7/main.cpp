/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 2, 2015, 1:24 PM
 * Purpose: Approximate e^x with an infinite sequence
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global constants
int SECYEAR=3.15569e7;
int SECMONT=2.62974e6;
int SECWEEK=604800;
int SECDAY=86400;
int SECHOUR=3600;
int SECMIN=60;

int main(int argc, char** argv) {
    //Declare variables
    int nSecs;
    int nYear,  nMonth,  nWeek;
    int nDay,   nHour,   nMin;
    
    cin>>nSecs;
    //Loop for conversion
    switch (nSecs>=0){
        case (nSecs>=SECYEAR)
                nYear=nSecs/SECYEAR;
        case (nYear>=0)
                nMonth=nSecs
        nMonth=(nSecs%SECYEAR)/SECMONT;
    }
        
    
    }  
    cout<<nYear<<endl;
    return 0;
    
    
    
    
     switch(conditional) {
         case condition 1:
         default:
     }
     
}
    

