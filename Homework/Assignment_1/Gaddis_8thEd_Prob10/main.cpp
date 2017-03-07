/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 28, 2017, 1:00 PM
 * Purpose: Miles per gallon
 */

//System Libraries
#include <iostream>//Input - Output Library

using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants

//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float gal, mildriv, MPG;
    //Initialize variables
    
    //Input data
    gal=15;
    mildriv=375;
    MPG=mildriv/gal;
    
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    cout<<"If a car drives "<<mildriv<<" miles and had "<<gal;
    cout<<" gallons of gas then it utilized "<<MPG<<" miles per gallon.";
    
    
    //Exit stage right
    
    return 0;
}