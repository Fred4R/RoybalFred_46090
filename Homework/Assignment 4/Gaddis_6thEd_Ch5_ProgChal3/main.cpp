/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 11, 2015, 6:59 PM
 * Purpose: Homework. Display the amount of millimeters the ocean is rising each
 * year
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float Total=0;
    float Rate=1.5;
    int Year=2016;
    
    
    cout<<"***************************"<<endl;
    cout<<"Year     Total Amount Risen"<<endl;
    cout<<"***************************"<<endl;
    cout<<Year<<"     "<<Rate<<" mm"<<endl;
    
    for (Year;Year<=2041;Year++,Total=Total+Rate){
        cout<<Year<<"     "<<Total<<" mm"<<endl;
        
    }
    return 0;
}