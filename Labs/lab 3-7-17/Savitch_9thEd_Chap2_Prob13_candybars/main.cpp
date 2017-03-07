/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on March 7th 2017, 12:00 PM
 * Purpose: Template to be utilized in creating 
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
    //declare and initialize variables
    char sex;                   //M vs F
    unsigned short ht,wgt,age;  //height in inches, weight in lbs, age in years
    unsigned char candybar=230; //amount of calories in a generic chocolate bar
    float bmr;                  //Basic Metabolic Rate 
    int numBars;                //Number of candy bars we can eat
    
    //Input data
    cout<<"This program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
       cout<<"Inputs are integer based!"<<endl;
    
    cout<<"Type in your Sex(M/F)";
        cin>>sex;
    
    cout<<"Height in inches ";
        cin>>ht;
    cout<<"Weight in pounds ";
        cin>>wgt;
    cout<<"And finally, age in years"<<endl; 
        cin>>age; 
   
    
    
    //Map inputs to outputs or process the data
   bmr=(sex=='M' || sex=='m')?
       66   +   6.3f*wgt    +   12.9f*ht    -   6.8f*age: //BMR for males
       655  +   4.3f*wgt    +   4.7f*ht     -   4.7f*age; //BMR for female
   numBars=static_cast<int>(bmr/candybar); //bar calculation
    //Output the transformed data
   cout<<"The number of candy bars you can eat = "<<numBars<<endl;
   
    //Exit stage right
    
    return 0;
}