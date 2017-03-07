/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 16, 2017, 12:00 9M
 * Purpose: Template to be utilized in creating 
 * solutions to problems in our CSC/CIS 5 class.
 */

//System Libraries
#include <iostream>//Input - Output Library

using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants

        float statetx,fedtx,captx;
        
        
        
//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    
    float base,sales,pump,prof,profper,taxper;
    
    //Initialize variables
    statetx=0.39f;
    fedtx=.184f;
    captx=.1f;
    sales=.08f;
    prof=.07;
    
    //Input data
    cout<<"Please enter the price of your gas without the dollar sign"<<endl;
    
    cin>>pump;
    cout<<endl;
    
    //Map inputs to outputs or process the data
    base=(pump-statetx-fedtx-captx)/(1+sales);
    profper=(prof/base)*100;
    taxper=((base*sales+statetx+fedtx+captx)/base)*100;
    //Output the transformed data
            cout<<"The base price of your gas is $"<<base<<endl;
            cout<<endl;
            cout<<"percentage of profit is "<<profper<<"%"<<endl;
            cout<<endl;
            cout<<"percentage of tax is "<<taxper<<"%"<<endl;
    //Exit stage right
    
    return 0;
}