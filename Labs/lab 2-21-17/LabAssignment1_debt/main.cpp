/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 21, 2017, 12:00 9M
 * Purpose: To create the ratio of national debt per person
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
     float POPa,POPb,FDBTa,FDBTb,DBTPPa,DBTPPb,mill;
     
    //Initialize variables
    mill=1e6;
    POPa=3.04e8; //2008 population
    POPb=3.22e8;  //2016 population
    FDBTa=9.7e12;// federal debt in 2008
    FDBTb=2e13;//federal debt in 2016
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    DBTPPa=FDBTa/POPa; //DEBT PER PERSON IN 2008
    DBTPPb=FDBTb/POPb; //DEBT PER PERSON IN 2016
    
    //Output the transformed data
    
    cout<<"In 2008 the national debt was $"<<FDBTa<<endl;
    cout<<endl;
    cout<<"With a general population of "<<POPa;
        cout<<" the average national debt per person is $";
                cout<<DBTPPa<<endl;
    cout<<endl;
     cout<<"In 2016 the national debt was $"<<FDBTb<<endl;
    cout<<endl;
    cout<<"With a general population of "<<POPb;
        cout<<" the average national debt per person is $";
                cout<<DBTPPb<<endl;
    //Exit stage right
    
    return 0;
}