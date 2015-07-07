/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on June 29, 2015, 6:31 AM
 * Purpose: Homework. Modify Savitch Practice Program 2 further and produce an
 * error message
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    cout<<"Hello"<<endl;
    
    int number_of_pods, peas_per_pod, total_peas;
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas=number_of_pods/peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";
    
    cout<<"Good-bye\n";
            
    return 0;
}

