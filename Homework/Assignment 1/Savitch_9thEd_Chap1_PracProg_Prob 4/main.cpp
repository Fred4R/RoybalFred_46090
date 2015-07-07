/*
 * File:   main.cpp
 * Author: Fred
 * Created on June 29, 2015, 6:08 AM
 * Purpose: Homework. Copy a program from the book (pg.20)
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int number_of_pods, peas_per_pod, total_peas;
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";

    cin>>number_of_pods;

    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas=number_of_pods+peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";

    return 0;
}

