/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 28, 2017, 12:45 PM
 * Purpose: Edit Satvitch 8th Ed. Chapt.1 prob 1 to add instead of multiply
            and see the error it creates*/

//System Libraries
#include <iostream>//Input - Output Library

using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants

//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
   int podnum,podpeas,totalp;
    cout << "Press return after entering a number.\n";
    cout << "Enter number of pods:\n";
    
    cin >> podnum;
    
    cout<< "Enter the number of peas in a pod:\n";
    cin >> podpeas;
    totalp = podnum + podpeas;
    cout << "If you have ";
    cout << podnum;
    cout << "pea pods\n";
    cout << "and ";
    cout << podpeas;
    cout << " peas in a pod, then\n";
    cout << "You have ";
    cout << totalp;
    cout << " peas in all the pods.\n";
    
    
    
    
    return 0;
}