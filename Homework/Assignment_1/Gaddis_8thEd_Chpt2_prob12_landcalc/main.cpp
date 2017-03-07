/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 16, 2017, 12:00 PM
 * Purpose: Convert acres to ft^2 and miles^2
 */

//System Libraries
#include <iostream>//Input - Output Library

using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants
  const float CNVACTF=43560; //1 Acre = 43560 sq ft
  const float CNVMIFT=1.0f/5280; //1 MILE = 5280 FT
  
  
//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
      float acres,ftsq,milesq;
      
    //Initialize variables
      acres=1.0f; //number of acres
      
    //Input data
    
    //Map inputs to outputs or process the data
      ftsq=acres*CNVACTF;
      milesq=ftsq*CNVMIFT*CNVMIFT;
      
    //Output the transformed data
      cout<<acres<<" Acres = "<<ftsq
              <<" ft^2 = "<<milesq<<" miles^2"<<endl;
    //Exit stage right
    
    return 0;
}