/*
 * File:   main.cpp
 * Author: Fred Roybal IV
 *
 * Created on July 1, 2015, 11:05 AM
*/

//System Libraies
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries


int main (int argc,char** argv) {
    //Declare variables
    unsigned char nMonths=36;   //Number of Months to payoff loan
    unsigned short loan=10000;  //Loan Amount in $'s
    float ir=0.01f;             //Interest Rate per Month
    float mnthPay;              //Monthley Payment in $'s
    float temp=1.0f;            //Intermediate value found in Monthly Payment equation
    float cstLoan;
    float totCost;
    
    //Calculate the intermediate value
    float onePlsi=(1+ir);
    for(int months=1;months<=nMonths;months++) {
        
        temp*=onePlsi;
    }
    
    //Calculate the monthly payment
        mnthPay=ir*temp*loan/ (temp-1);
        int imnthPay=mnthPay*100;
        mnthPay=static_cast<int>(imnthPay)/100.0f; //Exact amount in pennies
        totCost=nMonths*mnthPay;
        cstLoan=totCost-loan;

    //Output the results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Loan Amount:          $"<<setw(8)<<loan*1.0f<<endl;
    cout<<"Monthly Interest Rate: "<<setw(8)<<ir*100<<"%"<<endl;
    cout<<"Number of Payments     "<<setw(8)<<static_cast<int>(nMonths)<<endl;
    cout<<"Monthly Payment       $"<<setw(8)<<mnthPay<<endl;
    cout<<"Amount Paid Back:      "<<setw(8)<<totCost<<endl;
    cout<<"Interest Paid:        $"<<setw(8)<<totCost-loan<< endl;
    
        //exit stage right!
        return 0;
}
