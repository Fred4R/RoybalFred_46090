/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 6, 2015, 9:06 PM
 * Purpose: Homework. Adds up 10 non 0 numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variables
    int     num1,   num2,   num3,   num4,   //The ten numbers to be added
            num5,   num6,   num7,   num8,
            num9,   num10;
    int Answer=1;                           //Used for repeating program
    int RepeatInp;                          //Input by user for repeating
    //Prompt for input
    do {
    cout<<"Please enter 10 non-zero and non negative numbers by entering the";
    cout<<"number and pressing enter to input that number"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    cin>>num6;
    cin>>num7;
    cin>>num8;
    cin>>num9;
    cin>>num10;
    
    int Calc=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
    
    //Output unknowns
    cout<<"The sum of all numbers entered is ";
    cout<<Calc<<endl;
    cout<<"Would you like to run this program again?"<<endl;
    cout<<"type a 0 (zero) for yes and a 1 (one) for no"<<endl;
    cin>>RepeatInp;
    Answer=Answer+RepeatInp;
    
}while (Answer==1);

    
    return 0;
}

