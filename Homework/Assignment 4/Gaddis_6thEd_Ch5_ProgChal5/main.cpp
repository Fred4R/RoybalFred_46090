/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 13, 2015, 7:49 AM
 * Purpose: Homework. Display the cost of a country club membership after its
 * rate increase.
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int BaseRat=2500;
    int Year;
    float TtlCost;
    float RateInc=.04;
    float TtlAdd=BaseRat*RateInc;
    
    for(Year=1;Year<=6;Year++,TtlAdd+=TtlAdd){
        
        TtlCost=TtlAdd+BaseRat;
        cout<<"The total cost in year "<<Year<<" will be "<<TtlCost<<endl;
    }
    

    return 0;
}

