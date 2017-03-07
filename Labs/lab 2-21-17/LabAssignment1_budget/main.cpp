/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 21, 2017, 12:00 9M
 * Purpose: Create a program to show the Military
 *  and Nasa budget percentage
 */

//System Libraries
#include <iostream>//Input - Output Library
#include <iomanip>//Input - Output Library

using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants

//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float fedbud,nasbud,milbud,milperc,nasperc,bill;
    
    //Initialize variables
    bill=1e9;
    fedbud=3.54e3*bill; //federal budget
    milbud=5.8e2*bill;  //military budget
    nasbud=1.85e1*bill; //nasa budget
  
    //Input data
    
    //Map inputs to outputs or process the data
    
    milperc=milbud/fedbud*100; //spending percentage of Military
    nasperc=nasbud/fedbud*100; //spending percentage of NASA
    
    //Output the transformed data
    
    cout<<"With the federal spending amount of $"<<fedbud<<endl;
    cout<<endl;
    cout<<"The Military spending of $"<<milbud<<" is ";
                cout<<setprecision(4)<<milperc;
                cout<<" percent of the national budget"<<endl;
    cout<<endl;
    cout<<"The Nasa spending of $"<<nasbud<<" is ";
                cout<<setprecision(2)<<nasperc;
                cout<<" percent of the national budget"<<endl;
    //Exit stage right
    
    return 0;
}