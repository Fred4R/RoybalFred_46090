/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on June 29, 2015, 5:55 AM
 * Purpose: Homework. Create a letter C out of whatever character is inputed
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
   
    char Inp;       //The character to be inputed
    
    cout<<"This program will make a letter C out of the character typed in.\n";
    cin>>Inp;
    
    cout<<"  "<<Inp<<Inp<<Inp<<endl;
    cout<<" "<<Inp<<"   "<<Inp<<endl;
    cout<<Inp<<endl;
    cout<<Inp<<endl;
    cout<<Inp<<endl;
    cout<<Inp<<endl;
    cout<<Inp<<endl;
    cout<<" "<<Inp<<"   "<<Inp<<endl;
    cout<<"  "<<Inp<<Inp<<Inp<<endl;
    return 0;
}

