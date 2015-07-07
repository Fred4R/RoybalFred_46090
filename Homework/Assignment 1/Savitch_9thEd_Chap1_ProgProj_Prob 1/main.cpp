/* 
 * File:   main.cpp
 * Author: Fred Roybal
 * Created on June 28, 2015, 2:42 PM
 * Purpose: Homework. Produce a sum and product of two integers
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
    unsigned int FirstNm=2;      //The first integer
    unsigned int SeconNm=8;      //The second integer
    
    //Input Values Here
    
    //Process Input Here
    unsigned int SumofNm=FirstNm+SeconNm;
    unsigned int PrdctNm=FirstNm*SeconNm;
  
    //Output Unknowns here
    cout<<"The sum of "<<FirstNm<<" and "<<SeconNm<<" is "<<SumofNm;
    cout<<" while its product is "<<PrdctNm<<"."<<endl;
    
    //Exit Stage Right
    
    return 0;
}

