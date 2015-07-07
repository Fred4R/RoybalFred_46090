/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 2, 2015, 12:41 PM
 * Purpose: Approximate e^x with an infinite sequence
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global constants

int main(int argc, char** argv) {

    //Declare our variables
    float x=1.0f;   //The x in e^x
    float ex=1.0f;  //First term value in the exponential sequence 
    float delt=1.0f;//Incremental value of each term in the sequence
    float tol=1e-7; //Determine the accuracy for the approximation
    
    //Utilize a for-loop to calculate e^x
    for(int term=1;delt<-tol||delt>tol;delt*=x/term,ex+=delt,term++){}
    //for(int term=1;delt<-tol||delt>tol;term++){}
        //delt*=x/term;
        //ex+=delt;
    //How it should be written
    //Output the result
    cout<<fixed<<showpoint<<setprecision(15)<<endl;
    cout<<"Exact ("<<x<<")="<<exp(x)<<endl;
    cout<<"Approx e ("<<x<<")="<<ex<<endl;
    
    
    return 0;
}

