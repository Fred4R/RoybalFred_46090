/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 7, 2015, 11:46 PM
 * Purpose: Homework. Tell how much m.p.g. a car gets based on liters of gas
 * used
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CONVERS=0.264179f;      //Conversion for liters to gallons

//Function Prototypes
float Calc(unsigned int EntLitr, unsigned int EntTravl);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int Liters;            //Liters of gas the car used
    unsigned int milTrav1;          //Miles traveled by car 1
    unsigned int EntLitr1;          //Entered amount of liters for car 1
    unsigned int milTrav2;          //Miles traveled by car 1
    unsigned int EntLitr2;          //Entered amount of liters for car 2
    unsigned int EntTravl;          //Entered amount of miles from user
    float mpg;                      //Miles per gallon the car gets
    
    //Prompt for input
    cout<<"This program can tell how good 2 cars gas mileage is based \n";
    cout<<"off of liters of gas used to travel a set distance. \n";
    cout<<" \n";
    cout<<"Please enter the amount of liters used rounded to the closest whole";
    cout<<"number car 1.\n";
    cin>>EntLitr1;
    cout<<"Please enter the amount of miles traveled rounded to the closest ";
    cout<<"whole number for car 2.\n";
    cin>>EntTravl1;
    
    //Calculate
    cout<<Calc1(EntLit1, EntTrav1)<<endl;
    cout<<Calc2(EntLit2, EntTrav2)<<endl;
        
    
    

    return 0;
}

float Calc(unsigned int Liters, unsigned int milTravl){
    
    float mpg=(Liters*milTravl)/CONVERS;
    
    return(mpg);
}