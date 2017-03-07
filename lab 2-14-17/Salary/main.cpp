/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 14, 2017, 11:29 AM
 * Template to be utilized in creating 
 * solutions to problems in our CSC/CIS 5 class.
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
    float payChk, //Paycheck in $
          hrsWrkd, //Hours worked in hours
          payRate; //Pay rate in $'s/hour
    //Initialize variables
    hrsWrkd=40;
    payRate=10;
    //Input data
    payChk=hrsWrkd*payRate;
            
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Hours worked = "<<hrsWrkd<<" (hrs) "<<endl;
    cout<<"Pay rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    //Exit stage right
    return 0;
}

