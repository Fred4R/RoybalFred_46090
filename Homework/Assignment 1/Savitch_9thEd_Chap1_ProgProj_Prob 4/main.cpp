/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on June 23, 2015, 12:08 PM
 * Purpose: Homework, Free Fall
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants
const float GRAVITY=3.2714e1f;//Acceleration due to Earth's Gravity

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //dstnce = The distance droggped in (ft.)
    //time=Time in (secs)
    float dstnce, time;
    //Prompt then INput the time
    cout<<"To calculate the Distance Dropped\n";
    cout<<"Input the Time in Seconds"<<endl;
    cout<<"Time should be in floating format"<<endl;
    cin>>time;
    //Calculate the free-fall distance
    //dstnce=1/2*GRAVITY*time*time;  INCORRECT
    dstnce=1.0f/2*GRAVITY*time*time; //CORRECT
    //Output the results
    cout<<"The distance traveled = ";
    cout<<dstnce<<"(ft)"<<endl;
    //Exit Stage right!
    return 0;
}

