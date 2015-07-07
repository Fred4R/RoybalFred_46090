/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 2, 2015, 11:03 AM
 * Purpose: Generate Crud based upon the Fibonacci sequence.
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global constants

int main(int argc, char** argv) {
    
    //Declare and initialize members of the sequence
    unsigned short fi=1,fip1=1,fip2;
    unsigned char terms=10;
    float crudWt,nDays;
    
    //Print the initial conditions
    cout<<"Input the initial crud wieght in lbs."<<endl;
    cin>>crudWt;
    cout<<"Input the number of days allowed to grow"<<endl;
    cin>>nDays;
    
    //Scale the nDays to the Fibonacci Sequence
    terms=nDays/5+1;//Scale by 5 days and start at a term=1;
    
    //Given the 3 conditions
    if(terms==1){
        cout<<"The crud weight after "<<nDays<<" = "<<crudWt<<"(lbs)";
    }else if(terms ==2){
        cout<<"The crud weight after "<<nDays<<" = "<<crudWt<<"(lbs)";
    }else{
        //Loop and show terms as you generate
        for(unsigned char term=3;term<=terms;term++){
        //Calculate the next term in the sequence
        fip2=fi+fip1;
        //Output the current term
        //cout<<"The "<<static_cast<int>(term)<<" in the sequence = "<<fip2<<endl;
        //No shift
        fi=fip1;
        fip1=fip2;
     }
        cout<<"The crud weight after "<<nDays<<" = "<<fip2*crudWt<<"(lbs)";
     }
    return 0;
}
