/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 11, 2015, 2:52 PM
 * Purpose: Homework. Find the sum of a number entered and create equations for
 * the sum of that entered number and each individual number before it.
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    
    int EntNum;             //Number entered by user
    int NumCoun;            //Used to create numbers to add to EntNum
    int Sum;                //The sum of EntNum and NumCoun;
    
    cout<<"Please enter a positive number lower than 2,147,483,647."<<endl;
    cin>>EntNum;
    
    if(EntNum<0){
        cout<<"The program won't work with a negative number or a number over";
        cout<<"the given limit."<<endl;
        return 1;
    }
    
    for(int NumCoun=0;NumCoun<=EntNum;NumCoun++){
        Sum=NumCoun+EntNum;
        cout<<NumCoun<<" + "<<EntNum<<" = "<<Sum<<endl;
    }
    
         
    
    return 0;
}

