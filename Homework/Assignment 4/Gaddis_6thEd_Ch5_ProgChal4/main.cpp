/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 13, 2015, 7:42 AM
 * Purpose: Homework. Display the amount of calories burned every 5 minutes on 
 * a treadmill.
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float CalPerM=3.6;
    int TtlCal;
    
    for(int Minute=5;Minute<=30;Minute=Minute+5){
        TtlCal=Minute*CalPerM;
        cout<<"At "<<Minute<<" minutes you will have burned "<<TtlCal;
        cout<<" calories."<<endl;
    }

    return 0;
}

