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
    unsigned int milTravl;          //Miles traveled by car
    unsigned int EntLitr;           //Entered amount of liters from user
    unsigned int EntTravl;          //Entered amount of miles from user
    float mpg;                      //Miles per gallon the car gets
    
    //Prompt for input
    cout<<"This program can tell how good a car's gas mileage is based \n";
    cout<<"off of liters of gas used to travel a set distance. \n";
    cout<<" \n";
    cout<<"Please enter the amount of liters used rounded to the closest whole";
    cout<<"number\n";
    cin>>EntLitr;
    cout<<"Please enter the amount of miles traveled rounded to the closest ";
    cout<<"whole number.\n";
    cin>>EntTravl;
    
    //Calculate
    cout<<Calc(EntLitr, EntTravl)<<endl;
    
        
    
    

    return 0;
}

float Calc(unsigned int Liters, unsigned int milTravl){
    
    float mpg=(Liters*milTravl)/CONVERS;
    
    return(mpg);
}