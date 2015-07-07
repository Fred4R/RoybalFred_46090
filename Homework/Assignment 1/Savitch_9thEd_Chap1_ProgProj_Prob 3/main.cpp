/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on June 29, 2015, 2:33 AM
 * Purpose: Homework. Calculate total U.S. currency depending on entered amount
 * of quarters, dimes, and nickels, then counting coin values, and outputting 
 * the answer in total cents.
 */

//System Libraries

#include <iostream> //FIle I/O
using namespace std;

//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    
    unsigned int Quarter=25;   //Represents value of a U.S. quarter
    unsigned int Dime=10;      //Represents value of a U.S. dime
    unsigned int Nickel=5;     //Represents value of a U.S. nickel
    
    //Input Values Here
    
    unsigned int NumQuat;       //Number of quarters inputted by user
    unsigned int NumDime;       //Number of dimes inputted by user
    unsigned int NumNick;       //Number of nickels inputted by user
    
    
    
    
    
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"This program can calculate total U.S. currency depending on the";
    cout<<" entered amount of quarters, dimes, and nickels inputted."<<endl;
    cout<<" "<<endl;
    cout<<"To calculate the total value of currency please enter the amount\n";
    cout<<"of coins when asked. (Also note that this program does not factor";
    cout<<" pennies.)"<<endl;
    cout<<"Quarters =";
    cin>>NumQuat;
    
    unsigned int QuatWor=Quarter*NumQuat;
    
    cout<<"Dimes =";
    cin>>NumDime;
    
    unsigned int DimeWor=Dime*NumDime;
    
    cout<<"Nickels =";
   
    cin>>NumNick;
    
    unsigned int NickWor=Nickel*NumNick;
    
    cout<<"The total value of "<<NumQuat<<" quarters, "<<NumDime<<" dimes, ";
    cout<<"and "<<NumNick<<" nickels is ";
    unsigned int Total=QuatWor+DimeWor+NickWor;
    cout<<Total<<" U.S. cents.";
    
    //Exit Stage Right!
    
    return 0;
}

