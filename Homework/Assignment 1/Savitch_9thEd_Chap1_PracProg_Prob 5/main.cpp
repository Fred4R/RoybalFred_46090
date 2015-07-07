/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on June 29, 2015, 10:15 AM
 * Purpose: Homework. Use Savitch practice program 1 from ch.1 as a template to
 * create a program to calculate fence length in feet.
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    unsigned int Width, Height;          //Variables for width and height in ft.
    
    cout<<"This Program will calculate the amount of fence in feet needed ";
    cout<<"based off the inputed width and height"<<endl;
    cout<<"(This program will only work with whole numbers) "<<endl;
    cout<<"Please input the width in feet"<<endl;
    
    cin>>Width;
    
    cout<<"Please input the height in feet\n";
    
    cin>>Height;
    
    int totalLength=Width*Height;       //The total length of fence needed
    
    cout<<"If you have ";
    cout<<Width;
    cout<<" feet by ";
    cout<<Height;
    cout<<" feet of area, you will need ";
    cout<<totalLength;
    cout<<" feet of fence";
            
    return 0;
}

